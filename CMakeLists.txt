cmake_minimum_required(VERSION 3.1.0)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_STANDARD 20)    # On compile en C++20,
set(CMAKE_CXX_EXTENSIONS OFF) # sans les extensions de GNU.

# La raison pour laquelle on fait une variable d'environnement VCPKG_ROOT.
# S'il n'arrive pas à détecter le bon triplet, la variable d'environnement VCPKG_TARGET_TRIPLET peut être aussi configurée.
if (DEFINED ENV{VCPKG_ROOT})
	message(STATUS "VCPKG_ROOT: $ENV{VCPKG_ROOT}")
	if (DEFINED ENV{VCPKG_TARGET_TRIPLET})
		message(STATUS "VCPKG_TARGET_TRIPLET: $ENV{VCPKG_TARGET_TRIPLET}")
		set(VCPKG_TARGET_TRIPLET "$ENV{VCPKG_TARGET_TRIPLET}")
	endif()
	set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake")
endif()

# Le nom du projet.
project(ProjetTest)

# Affiche quelques variables utiles s'il y a un problème, par exemple avec vcpkg (certaines variables existent juste après la commande "project", qui utilise le "toolchain")
message(STATUS "CMake      generator: ${CMAKE_GENERATOR}")
message(STATUS "            platform: ${CMAKE_GENERATOR_PLATFORM}")
message(STATUS "    host system name: ${CMAKE_HOST_SYSTEM_NAME}")
if (NOT CMAKE_SYSTEM_NAME STREQUAL CMAKE_HOST_SYSTEM_NAME)
	message(STATUS "         system name: ${CMAKE_SYSTEM_NAME}")
endif()
message(STATUS "      host processor: ${CMAKE_HOST_SYSTEM_PROCESSOR}")
if (DEFINED ENV{VCPKG_ROOT})
	message(STATUS "VCPKG triplet: ${VCPKG_TARGET_TRIPLET}")
endif()

# Pour Qt (basé sur https://doc.qt.io/qt-5/cmake-get-started.html )
# Doit être fait avant le "add_executable" pour que le compilateur MOC soit exécuté; le build devrait afficher un message comme "Automatic MOC and UIC for target".
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
if(CMAKE_VERSION VERSION_LESS "3.7.0")
	set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

# On met les fichiers sources (incluant les entêtes)
set(ALL_FILES
	"main.cpp"
	"TestChessGame.cpp"
	"Board.hpp"
	"Board.cpp"
	"BoardWindow.cpp"
	"BoardWindow.hpp"
	"BoardGame.cpp"
	"Piece.cpp"
	"King.cpp"
	"Knight.cpp"
	"Bishop.cpp"
	"welcomewindow.cpp"
	"welcomewindow.hpp"
	"bibliotheque_cours/bibliotheque_cours.cpp"
	"bibliotheque_cours/verification_allocation.cpp"
	"googletest/src/gtest-all.cc"
)

# Les options de compilation (add_compile_options doit être avant add_executable)
if (NOT MSVC)
	# Les flags de compilation. Ceux-ci reproduisent un peu le comportement de MSVC avec /W4.
	# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsigned-char -Wall -Wextra -Wpedantic -Woverloaded-virtual -Wno-unknown-pragmas -Wno-enum-compare --coverage")
	add_compile_options(-fsigned-char -Wall -Wextra -Wpedantic -Woverloaded-virtual -Wno-unknown-pragmas -Wno-enum-compare --coverage)
	if (CMAKE_VERSION VERSION_LESS "3.13.0")
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")
	else()
		add_link_options(--coverage)
	endif()
else()
	add_compile_options(/Zi /W4 /permissive- /execution-charset:utf-8 )
endif()

add_executable(${PROJECT_NAME} ${ALL_FILES})

find_package(Qt5 5.15 COMPONENTS Core Widgets REQUIRED)
# Les target_link_libraries doivent être ajoutées après le add_executable (elles sont associées à cet exécutable par le nom)
target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Widgets)

# Affiche des informations sur Qt; doit être après le find_package(Qt5 ...)
message(STATUS "Qt5   dir: ${Qt5_DIR}")
message(STATUS "  version: ${Qt5_VERSION}")

# On ajoute le dossier include/ fourni, comme des fichiers d'inclusion du système.
target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE "include")

target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE "googletest" PRIVATE "googletest/include")

# Pour Google Test (basé sur https://stackoverflow.com/questions/1620918/cmake-and-libpthread )
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(${PROJECT_NAME} Threads::Threads)
add_compile_definitions(_POSIX_C_SOURCE=200809L)  # Requis pour compiler GoogleTest sous Cygiwin, voir https://github.com/google/googletest/issues/813

if (NOT MSVC)
	# Efface les fichiers .gcda (couveture de code) après le build car ils ne correspondent plus au nouveau build. 
	add_custom_command(
		TARGET ${PROJECT_NAME}
		POST_BUILD
		COMMAND rm -f "${PROJECT_BINARY_DIR}/${CMAKE_FILES_DIRECTORY}/${PROJECT_NAME}.dir/*.gcda"
		COMMAND rm -f "${PROJECT_BINARY_DIR}/${CMAKE_FILES_DIRECTORY}/${PROJECT_NAME}.dir/**/*.gcda"
	)

	# Si on trouve gcov, on fait une cible avec nom ..._couveture pour exécuter gcov et obtenir la couverture de code.
	find_program(GCOV_PATH gcov)
	if (GCOV_PATH)
		add_custom_target(${PROJECT_NAME}_couverture
			# Vous devez exécuter le programme avant de "build" cette cible, ou décommenter la ligne suivante qui l'exécute mais ne fonctionne pas si le programme a besoin d'interagir avec l'usager:
			# COMMAND ${PROJECT_NAME}
		
			# Analyse le fichier de couverture:
			COMMAND ${GCOV_PATH} -s "${ProjetTest_SOURCE_DIR}" -r -f -m "${PROJECT_BINARY_DIR}/${CMAKE_FILES_DIRECTORY}/${PROJECT_NAME}.dir/*.gcda"

			WORKING_DIRECTORY ${PROJECT_BINARY_DIR}
			DEPENDS ${PROJECT_NAME}
		)
	endif()
else()
	# On n'a pas actuellement la couverture de test qui fonctionne avec MSVC dans VSCode.
endif()
