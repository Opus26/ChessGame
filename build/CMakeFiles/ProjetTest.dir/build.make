# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jean-christopheveilleux/Desktop/ChessGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jean-christopheveilleux/Desktop/ChessGame/build

# Include any dependencies generated for this target.
include CMakeFiles/ProjetTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ProjetTest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ProjetTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProjetTest.dir/flags.make

CMakeFiles/ProjetTest.dir/ProjetTest_autogen/mocs_compilation.cpp.o: CMakeFiles/ProjetTest.dir/flags.make
CMakeFiles/ProjetTest.dir/ProjetTest_autogen/mocs_compilation.cpp.o: ProjetTest_autogen/mocs_compilation.cpp
CMakeFiles/ProjetTest.dir/ProjetTest_autogen/mocs_compilation.cpp.o: CMakeFiles/ProjetTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jean-christopheveilleux/Desktop/ChessGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ProjetTest.dir/ProjetTest_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetTest.dir/ProjetTest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/ProjetTest.dir/ProjetTest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/ProjetTest.dir/ProjetTest_autogen/mocs_compilation.cpp.o -c /Users/jean-christopheveilleux/Desktop/ChessGame/build/ProjetTest_autogen/mocs_compilation.cpp

CMakeFiles/ProjetTest.dir/ProjetTest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjetTest.dir/ProjetTest_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jean-christopheveilleux/Desktop/ChessGame/build/ProjetTest_autogen/mocs_compilation.cpp > CMakeFiles/ProjetTest.dir/ProjetTest_autogen/mocs_compilation.cpp.i

CMakeFiles/ProjetTest.dir/ProjetTest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjetTest.dir/ProjetTest_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jean-christopheveilleux/Desktop/ChessGame/build/ProjetTest_autogen/mocs_compilation.cpp -o CMakeFiles/ProjetTest.dir/ProjetTest_autogen/mocs_compilation.cpp.s

CMakeFiles/ProjetTest.dir/main.cpp.o: CMakeFiles/ProjetTest.dir/flags.make
CMakeFiles/ProjetTest.dir/main.cpp.o: ../main.cpp
CMakeFiles/ProjetTest.dir/main.cpp.o: CMakeFiles/ProjetTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jean-christopheveilleux/Desktop/ChessGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ProjetTest.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetTest.dir/main.cpp.o -MF CMakeFiles/ProjetTest.dir/main.cpp.o.d -o CMakeFiles/ProjetTest.dir/main.cpp.o -c /Users/jean-christopheveilleux/Desktop/ChessGame/main.cpp

CMakeFiles/ProjetTest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjetTest.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jean-christopheveilleux/Desktop/ChessGame/main.cpp > CMakeFiles/ProjetTest.dir/main.cpp.i

CMakeFiles/ProjetTest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjetTest.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jean-christopheveilleux/Desktop/ChessGame/main.cpp -o CMakeFiles/ProjetTest.dir/main.cpp.s

CMakeFiles/ProjetTest.dir/TestChessGame.cpp.o: CMakeFiles/ProjetTest.dir/flags.make
CMakeFiles/ProjetTest.dir/TestChessGame.cpp.o: ../TestChessGame.cpp
CMakeFiles/ProjetTest.dir/TestChessGame.cpp.o: CMakeFiles/ProjetTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jean-christopheveilleux/Desktop/ChessGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ProjetTest.dir/TestChessGame.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetTest.dir/TestChessGame.cpp.o -MF CMakeFiles/ProjetTest.dir/TestChessGame.cpp.o.d -o CMakeFiles/ProjetTest.dir/TestChessGame.cpp.o -c /Users/jean-christopheveilleux/Desktop/ChessGame/TestChessGame.cpp

CMakeFiles/ProjetTest.dir/TestChessGame.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjetTest.dir/TestChessGame.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jean-christopheveilleux/Desktop/ChessGame/TestChessGame.cpp > CMakeFiles/ProjetTest.dir/TestChessGame.cpp.i

CMakeFiles/ProjetTest.dir/TestChessGame.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjetTest.dir/TestChessGame.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jean-christopheveilleux/Desktop/ChessGame/TestChessGame.cpp -o CMakeFiles/ProjetTest.dir/TestChessGame.cpp.s

CMakeFiles/ProjetTest.dir/Board.cpp.o: CMakeFiles/ProjetTest.dir/flags.make
CMakeFiles/ProjetTest.dir/Board.cpp.o: ../Board.cpp
CMakeFiles/ProjetTest.dir/Board.cpp.o: CMakeFiles/ProjetTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jean-christopheveilleux/Desktop/ChessGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ProjetTest.dir/Board.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetTest.dir/Board.cpp.o -MF CMakeFiles/ProjetTest.dir/Board.cpp.o.d -o CMakeFiles/ProjetTest.dir/Board.cpp.o -c /Users/jean-christopheveilleux/Desktop/ChessGame/Board.cpp

CMakeFiles/ProjetTest.dir/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjetTest.dir/Board.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jean-christopheveilleux/Desktop/ChessGame/Board.cpp > CMakeFiles/ProjetTest.dir/Board.cpp.i

CMakeFiles/ProjetTest.dir/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjetTest.dir/Board.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jean-christopheveilleux/Desktop/ChessGame/Board.cpp -o CMakeFiles/ProjetTest.dir/Board.cpp.s

CMakeFiles/ProjetTest.dir/BoardWindow.cpp.o: CMakeFiles/ProjetTest.dir/flags.make
CMakeFiles/ProjetTest.dir/BoardWindow.cpp.o: ../BoardWindow.cpp
CMakeFiles/ProjetTest.dir/BoardWindow.cpp.o: CMakeFiles/ProjetTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jean-christopheveilleux/Desktop/ChessGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ProjetTest.dir/BoardWindow.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetTest.dir/BoardWindow.cpp.o -MF CMakeFiles/ProjetTest.dir/BoardWindow.cpp.o.d -o CMakeFiles/ProjetTest.dir/BoardWindow.cpp.o -c /Users/jean-christopheveilleux/Desktop/ChessGame/BoardWindow.cpp

CMakeFiles/ProjetTest.dir/BoardWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjetTest.dir/BoardWindow.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jean-christopheveilleux/Desktop/ChessGame/BoardWindow.cpp > CMakeFiles/ProjetTest.dir/BoardWindow.cpp.i

CMakeFiles/ProjetTest.dir/BoardWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjetTest.dir/BoardWindow.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jean-christopheveilleux/Desktop/ChessGame/BoardWindow.cpp -o CMakeFiles/ProjetTest.dir/BoardWindow.cpp.s

CMakeFiles/ProjetTest.dir/BoardGame.cpp.o: CMakeFiles/ProjetTest.dir/flags.make
CMakeFiles/ProjetTest.dir/BoardGame.cpp.o: ../BoardGame.cpp
CMakeFiles/ProjetTest.dir/BoardGame.cpp.o: CMakeFiles/ProjetTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jean-christopheveilleux/Desktop/ChessGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ProjetTest.dir/BoardGame.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetTest.dir/BoardGame.cpp.o -MF CMakeFiles/ProjetTest.dir/BoardGame.cpp.o.d -o CMakeFiles/ProjetTest.dir/BoardGame.cpp.o -c /Users/jean-christopheveilleux/Desktop/ChessGame/BoardGame.cpp

CMakeFiles/ProjetTest.dir/BoardGame.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjetTest.dir/BoardGame.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jean-christopheveilleux/Desktop/ChessGame/BoardGame.cpp > CMakeFiles/ProjetTest.dir/BoardGame.cpp.i

CMakeFiles/ProjetTest.dir/BoardGame.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjetTest.dir/BoardGame.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jean-christopheveilleux/Desktop/ChessGame/BoardGame.cpp -o CMakeFiles/ProjetTest.dir/BoardGame.cpp.s

CMakeFiles/ProjetTest.dir/Piece.cpp.o: CMakeFiles/ProjetTest.dir/flags.make
CMakeFiles/ProjetTest.dir/Piece.cpp.o: ../Piece.cpp
CMakeFiles/ProjetTest.dir/Piece.cpp.o: CMakeFiles/ProjetTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jean-christopheveilleux/Desktop/ChessGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ProjetTest.dir/Piece.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetTest.dir/Piece.cpp.o -MF CMakeFiles/ProjetTest.dir/Piece.cpp.o.d -o CMakeFiles/ProjetTest.dir/Piece.cpp.o -c /Users/jean-christopheveilleux/Desktop/ChessGame/Piece.cpp

CMakeFiles/ProjetTest.dir/Piece.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjetTest.dir/Piece.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jean-christopheveilleux/Desktop/ChessGame/Piece.cpp > CMakeFiles/ProjetTest.dir/Piece.cpp.i

CMakeFiles/ProjetTest.dir/Piece.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjetTest.dir/Piece.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jean-christopheveilleux/Desktop/ChessGame/Piece.cpp -o CMakeFiles/ProjetTest.dir/Piece.cpp.s

CMakeFiles/ProjetTest.dir/King.cpp.o: CMakeFiles/ProjetTest.dir/flags.make
CMakeFiles/ProjetTest.dir/King.cpp.o: ../King.cpp
CMakeFiles/ProjetTest.dir/King.cpp.o: CMakeFiles/ProjetTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jean-christopheveilleux/Desktop/ChessGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ProjetTest.dir/King.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetTest.dir/King.cpp.o -MF CMakeFiles/ProjetTest.dir/King.cpp.o.d -o CMakeFiles/ProjetTest.dir/King.cpp.o -c /Users/jean-christopheveilleux/Desktop/ChessGame/King.cpp

CMakeFiles/ProjetTest.dir/King.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjetTest.dir/King.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jean-christopheveilleux/Desktop/ChessGame/King.cpp > CMakeFiles/ProjetTest.dir/King.cpp.i

CMakeFiles/ProjetTest.dir/King.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjetTest.dir/King.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jean-christopheveilleux/Desktop/ChessGame/King.cpp -o CMakeFiles/ProjetTest.dir/King.cpp.s

CMakeFiles/ProjetTest.dir/Knight.cpp.o: CMakeFiles/ProjetTest.dir/flags.make
CMakeFiles/ProjetTest.dir/Knight.cpp.o: ../Knight.cpp
CMakeFiles/ProjetTest.dir/Knight.cpp.o: CMakeFiles/ProjetTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jean-christopheveilleux/Desktop/ChessGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ProjetTest.dir/Knight.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetTest.dir/Knight.cpp.o -MF CMakeFiles/ProjetTest.dir/Knight.cpp.o.d -o CMakeFiles/ProjetTest.dir/Knight.cpp.o -c /Users/jean-christopheveilleux/Desktop/ChessGame/Knight.cpp

CMakeFiles/ProjetTest.dir/Knight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjetTest.dir/Knight.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jean-christopheveilleux/Desktop/ChessGame/Knight.cpp > CMakeFiles/ProjetTest.dir/Knight.cpp.i

CMakeFiles/ProjetTest.dir/Knight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjetTest.dir/Knight.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jean-christopheveilleux/Desktop/ChessGame/Knight.cpp -o CMakeFiles/ProjetTest.dir/Knight.cpp.s

CMakeFiles/ProjetTest.dir/Bishop.cpp.o: CMakeFiles/ProjetTest.dir/flags.make
CMakeFiles/ProjetTest.dir/Bishop.cpp.o: ../Bishop.cpp
CMakeFiles/ProjetTest.dir/Bishop.cpp.o: CMakeFiles/ProjetTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jean-christopheveilleux/Desktop/ChessGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ProjetTest.dir/Bishop.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetTest.dir/Bishop.cpp.o -MF CMakeFiles/ProjetTest.dir/Bishop.cpp.o.d -o CMakeFiles/ProjetTest.dir/Bishop.cpp.o -c /Users/jean-christopheveilleux/Desktop/ChessGame/Bishop.cpp

CMakeFiles/ProjetTest.dir/Bishop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjetTest.dir/Bishop.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jean-christopheveilleux/Desktop/ChessGame/Bishop.cpp > CMakeFiles/ProjetTest.dir/Bishop.cpp.i

CMakeFiles/ProjetTest.dir/Bishop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjetTest.dir/Bishop.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jean-christopheveilleux/Desktop/ChessGame/Bishop.cpp -o CMakeFiles/ProjetTest.dir/Bishop.cpp.s

CMakeFiles/ProjetTest.dir/welcomewindow.cpp.o: CMakeFiles/ProjetTest.dir/flags.make
CMakeFiles/ProjetTest.dir/welcomewindow.cpp.o: ../welcomewindow.cpp
CMakeFiles/ProjetTest.dir/welcomewindow.cpp.o: CMakeFiles/ProjetTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jean-christopheveilleux/Desktop/ChessGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/ProjetTest.dir/welcomewindow.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetTest.dir/welcomewindow.cpp.o -MF CMakeFiles/ProjetTest.dir/welcomewindow.cpp.o.d -o CMakeFiles/ProjetTest.dir/welcomewindow.cpp.o -c /Users/jean-christopheveilleux/Desktop/ChessGame/welcomewindow.cpp

CMakeFiles/ProjetTest.dir/welcomewindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjetTest.dir/welcomewindow.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jean-christopheveilleux/Desktop/ChessGame/welcomewindow.cpp > CMakeFiles/ProjetTest.dir/welcomewindow.cpp.i

CMakeFiles/ProjetTest.dir/welcomewindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjetTest.dir/welcomewindow.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jean-christopheveilleux/Desktop/ChessGame/welcomewindow.cpp -o CMakeFiles/ProjetTest.dir/welcomewindow.cpp.s

CMakeFiles/ProjetTest.dir/bibliotheque_cours/bibliotheque_cours.cpp.o: CMakeFiles/ProjetTest.dir/flags.make
CMakeFiles/ProjetTest.dir/bibliotheque_cours/bibliotheque_cours.cpp.o: ../bibliotheque_cours/bibliotheque_cours.cpp
CMakeFiles/ProjetTest.dir/bibliotheque_cours/bibliotheque_cours.cpp.o: CMakeFiles/ProjetTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jean-christopheveilleux/Desktop/ChessGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/ProjetTest.dir/bibliotheque_cours/bibliotheque_cours.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetTest.dir/bibliotheque_cours/bibliotheque_cours.cpp.o -MF CMakeFiles/ProjetTest.dir/bibliotheque_cours/bibliotheque_cours.cpp.o.d -o CMakeFiles/ProjetTest.dir/bibliotheque_cours/bibliotheque_cours.cpp.o -c /Users/jean-christopheveilleux/Desktop/ChessGame/bibliotheque_cours/bibliotheque_cours.cpp

CMakeFiles/ProjetTest.dir/bibliotheque_cours/bibliotheque_cours.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjetTest.dir/bibliotheque_cours/bibliotheque_cours.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jean-christopheveilleux/Desktop/ChessGame/bibliotheque_cours/bibliotheque_cours.cpp > CMakeFiles/ProjetTest.dir/bibliotheque_cours/bibliotheque_cours.cpp.i

CMakeFiles/ProjetTest.dir/bibliotheque_cours/bibliotheque_cours.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjetTest.dir/bibliotheque_cours/bibliotheque_cours.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jean-christopheveilleux/Desktop/ChessGame/bibliotheque_cours/bibliotheque_cours.cpp -o CMakeFiles/ProjetTest.dir/bibliotheque_cours/bibliotheque_cours.cpp.s

CMakeFiles/ProjetTest.dir/bibliotheque_cours/verification_allocation.cpp.o: CMakeFiles/ProjetTest.dir/flags.make
CMakeFiles/ProjetTest.dir/bibliotheque_cours/verification_allocation.cpp.o: ../bibliotheque_cours/verification_allocation.cpp
CMakeFiles/ProjetTest.dir/bibliotheque_cours/verification_allocation.cpp.o: CMakeFiles/ProjetTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jean-christopheveilleux/Desktop/ChessGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/ProjetTest.dir/bibliotheque_cours/verification_allocation.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetTest.dir/bibliotheque_cours/verification_allocation.cpp.o -MF CMakeFiles/ProjetTest.dir/bibliotheque_cours/verification_allocation.cpp.o.d -o CMakeFiles/ProjetTest.dir/bibliotheque_cours/verification_allocation.cpp.o -c /Users/jean-christopheveilleux/Desktop/ChessGame/bibliotheque_cours/verification_allocation.cpp

CMakeFiles/ProjetTest.dir/bibliotheque_cours/verification_allocation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjetTest.dir/bibliotheque_cours/verification_allocation.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jean-christopheveilleux/Desktop/ChessGame/bibliotheque_cours/verification_allocation.cpp > CMakeFiles/ProjetTest.dir/bibliotheque_cours/verification_allocation.cpp.i

CMakeFiles/ProjetTest.dir/bibliotheque_cours/verification_allocation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjetTest.dir/bibliotheque_cours/verification_allocation.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jean-christopheveilleux/Desktop/ChessGame/bibliotheque_cours/verification_allocation.cpp -o CMakeFiles/ProjetTest.dir/bibliotheque_cours/verification_allocation.cpp.s

CMakeFiles/ProjetTest.dir/googletest/src/gtest-all.cc.o: CMakeFiles/ProjetTest.dir/flags.make
CMakeFiles/ProjetTest.dir/googletest/src/gtest-all.cc.o: ../googletest/src/gtest-all.cc
CMakeFiles/ProjetTest.dir/googletest/src/gtest-all.cc.o: CMakeFiles/ProjetTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jean-christopheveilleux/Desktop/ChessGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/ProjetTest.dir/googletest/src/gtest-all.cc.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjetTest.dir/googletest/src/gtest-all.cc.o -MF CMakeFiles/ProjetTest.dir/googletest/src/gtest-all.cc.o.d -o CMakeFiles/ProjetTest.dir/googletest/src/gtest-all.cc.o -c /Users/jean-christopheveilleux/Desktop/ChessGame/googletest/src/gtest-all.cc

CMakeFiles/ProjetTest.dir/googletest/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjetTest.dir/googletest/src/gtest-all.cc.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jean-christopheveilleux/Desktop/ChessGame/googletest/src/gtest-all.cc > CMakeFiles/ProjetTest.dir/googletest/src/gtest-all.cc.i

CMakeFiles/ProjetTest.dir/googletest/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjetTest.dir/googletest/src/gtest-all.cc.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jean-christopheveilleux/Desktop/ChessGame/googletest/src/gtest-all.cc -o CMakeFiles/ProjetTest.dir/googletest/src/gtest-all.cc.s

# Object files for target ProjetTest
ProjetTest_OBJECTS = \
"CMakeFiles/ProjetTest.dir/ProjetTest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/ProjetTest.dir/main.cpp.o" \
"CMakeFiles/ProjetTest.dir/TestChessGame.cpp.o" \
"CMakeFiles/ProjetTest.dir/Board.cpp.o" \
"CMakeFiles/ProjetTest.dir/BoardWindow.cpp.o" \
"CMakeFiles/ProjetTest.dir/BoardGame.cpp.o" \
"CMakeFiles/ProjetTest.dir/Piece.cpp.o" \
"CMakeFiles/ProjetTest.dir/King.cpp.o" \
"CMakeFiles/ProjetTest.dir/Knight.cpp.o" \
"CMakeFiles/ProjetTest.dir/Bishop.cpp.o" \
"CMakeFiles/ProjetTest.dir/welcomewindow.cpp.o" \
"CMakeFiles/ProjetTest.dir/bibliotheque_cours/bibliotheque_cours.cpp.o" \
"CMakeFiles/ProjetTest.dir/bibliotheque_cours/verification_allocation.cpp.o" \
"CMakeFiles/ProjetTest.dir/googletest/src/gtest-all.cc.o"

# External object files for target ProjetTest
ProjetTest_EXTERNAL_OBJECTS =

ProjetTest: CMakeFiles/ProjetTest.dir/ProjetTest_autogen/mocs_compilation.cpp.o
ProjetTest: CMakeFiles/ProjetTest.dir/main.cpp.o
ProjetTest: CMakeFiles/ProjetTest.dir/TestChessGame.cpp.o
ProjetTest: CMakeFiles/ProjetTest.dir/Board.cpp.o
ProjetTest: CMakeFiles/ProjetTest.dir/BoardWindow.cpp.o
ProjetTest: CMakeFiles/ProjetTest.dir/BoardGame.cpp.o
ProjetTest: CMakeFiles/ProjetTest.dir/Piece.cpp.o
ProjetTest: CMakeFiles/ProjetTest.dir/King.cpp.o
ProjetTest: CMakeFiles/ProjetTest.dir/Knight.cpp.o
ProjetTest: CMakeFiles/ProjetTest.dir/Bishop.cpp.o
ProjetTest: CMakeFiles/ProjetTest.dir/welcomewindow.cpp.o
ProjetTest: CMakeFiles/ProjetTest.dir/bibliotheque_cours/bibliotheque_cours.cpp.o
ProjetTest: CMakeFiles/ProjetTest.dir/bibliotheque_cours/verification_allocation.cpp.o
ProjetTest: CMakeFiles/ProjetTest.dir/googletest/src/gtest-all.cc.o
ProjetTest: CMakeFiles/ProjetTest.dir/build.make
ProjetTest: /Users/jean-christopheveilleux/Qt/5.15.2/clang_64/lib/QtWidgets.framework/QtWidgets
ProjetTest: /Users/jean-christopheveilleux/Qt/5.15.2/clang_64/lib/QtGui.framework/QtGui
ProjetTest: /Users/jean-christopheveilleux/Qt/5.15.2/clang_64/lib/QtCore.framework/QtCore
ProjetTest: CMakeFiles/ProjetTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jean-christopheveilleux/Desktop/ChessGame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX executable ProjetTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ProjetTest.dir/link.txt --verbose=$(VERBOSE)
	rm -f /Users/jean-christopheveilleux/Desktop/ChessGame/build//CMakeFiles/ProjetTest.dir/*.gcda
	rm -f /Users/jean-christopheveilleux/Desktop/ChessGame/build//CMakeFiles/ProjetTest.dir/**/*.gcda

# Rule to build all files generated by this target.
CMakeFiles/ProjetTest.dir/build: ProjetTest
.PHONY : CMakeFiles/ProjetTest.dir/build

CMakeFiles/ProjetTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ProjetTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ProjetTest.dir/clean

CMakeFiles/ProjetTest.dir/depend:
	cd /Users/jean-christopheveilleux/Desktop/ChessGame/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jean-christopheveilleux/Desktop/ChessGame /Users/jean-christopheveilleux/Desktop/ChessGame /Users/jean-christopheveilleux/Desktop/ChessGame/build /Users/jean-christopheveilleux/Desktop/ChessGame/build /Users/jean-christopheveilleux/Desktop/ChessGame/build/CMakeFiles/ProjetTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ProjetTest.dir/depend

