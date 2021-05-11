/**
* Tests sur l'ensemble de la logique de ChessGame
* \file   TestChessGame.cpp
* \author Jean-Christophe Veilleux 2091306
*		  Emmanuelle Roy-Dubreuil  2080269
* \date   9 mai 2021
* Cr�� le 2 avril 2021
*/

#include "BoardGame.hpp"
#include "gtest/gtest.h"
#include <algorithm>    // std::sort

#if __has_include("gtest/gtest.h")
#include "gtest/gtest.h"
#endif

// Warning temporaire, non justifier sur vs code � cause diff�rence type entre Emmanuelle et Jean-Christophe

typedef std::vector<int> positions;


typedef std::vector<int> positions;

TEST(PositionsTest, ValidPositionsKing) {
    ChessGame::King whiteKing(true);

    // Test haut + centre (OK)  
    positions K_0_4 = whiteKing.changePosition(4); // Position 04
    positions K_0_4_Ref = { 3, 4, 5, 11, 12, 13 };
    std::sort(K_0_4.begin(), K_0_4.end());

    for (int i = 0; i < ssize(K_0_4_Ref); ++i) {
        EXPECT_EQ(K_0_4[i], K_0_4_Ref[i]) << "Vectors K_0_4 and K_0_4_Ref differ at index " << i;
    }

    // Test haut + gauche (OK)
    positions K_0_0 = whiteKing.changePosition(0); // Position 00 
    positions K_0_0_Ref = { 0, 1, 8, 9 };
    std::sort(K_0_0.begin(), K_0_0.end());

    for (int i = 0; i < ssize(K_0_0_Ref); ++i) {
        EXPECT_EQ(K_0_0[i], K_0_0_Ref[i]) << "Vectors K_0_0 and K_0_0_Ref differ at index " << i;
    }

    // Test haut + droite (OK)
    positions K_0_7 = whiteKing.changePosition(7); // Position 07
    positions K_0_7_Ref = { 6, 7, 14, 15 };
    std::sort(K_0_7.begin(), K_0_7.end());

    for (int i = 0; i < ssize(K_0_7_Ref); ++i) {
        EXPECT_EQ(K_0_7[i], K_0_7_Ref[i]) << "Vectors K_0_7 and K_0_7_Ref differ at index " << i;
    }

    // Test centre + centre (OK)
    positions K_3_4 = whiteKing.changePosition(28); // Position 28
    positions K_3_4_Ref = { 19, 20, 21, 27, 28, 29, 35, 36, 37 };
    std::sort(K_3_4.begin(), K_3_4.end());

    for (int i = 0; i < ssize(K_3_4_Ref); ++i) {
        EXPECT_EQ(K_3_4[i], K_3_4_Ref[i]) << "Vectors K_3_4 and K_3_4_Ref differ at index " << i;
    }

    // Test centre + gauche (OK)
    positions K_3_0 = whiteKing.changePosition(24); // Position 24 
    positions K_3_0_Ref = { 16, 17, 24, 25, 32, 33 };
    std::sort(K_3_0.begin(), K_3_0.end());

    for (int i = 0; i < ssize(K_3_0_Ref); ++i) {
        EXPECT_EQ(K_3_0[i], K_3_0_Ref[i]) << "Vectors K_3_0 and K_3_0_Ref differ at index " << i;
    }

    // Test centre + droite (OK)
    positions K_3_7 = whiteKing.changePosition(31); // Position 31 
    positions K_3_7_Ref = { 22, 23, 30, 31, 38, 39 };
    std::sort(K_3_7.begin(), K_3_7.end());

    for (int i = 0; i < ssize(K_3_7_Ref); ++i) {
        EXPECT_EQ(K_3_7[i], K_3_7_Ref[i]) << "Vectors K_3_7 and K_3_7_Ref differ at index " << i;
    }

    // Test bas + centre (OK) 
    positions K_7_3 = whiteKing.changePosition(59); // Position 59 
    positions K_7_3_Ref = { 50, 51, 52, 58, 59, 60 };
    std::sort(K_7_3.begin(), K_7_3.end());

    for (int i = 0; i < ssize(K_7_3_Ref); ++i) {
        EXPECT_EQ(K_7_3[i], K_7_3_Ref[i]) << "Vectors K_7_3 and K_7_3_Ref differ at index " << i;
    }

    // Test bas + gauche (OK)
    positions K_7_0 = whiteKing.changePosition(56); // Position 56 
    positions K_7_0_Ref = { 48, 49, 56, 57 };
    std::sort(K_7_0.begin(), K_7_0.end());

    for (int i = 0; i < ssize(K_7_0_Ref); ++i) {
        EXPECT_EQ(K_7_0[i], K_7_0_Ref[i]) << "Vectors K_7_0 and K_7_0_Ref differ at index " << i;
    }

    // Test bas + droite (OK)
    positions K_7_7 = whiteKing.changePosition(63); // Position 63
    positions K_7_7_Ref = { 54, 55, 62, 63 };
    std::sort(K_7_7.begin(), K_7_7.end());

    for (int i = 0; i < ssize(K_7_7_Ref); ++i) {
        EXPECT_EQ(K_7_7[i], K_7_7_Ref[i]) << "Vectors K_7_7 and K_7_7_Ref differ at index " << i;
    }

    ChessGame::King::nKing = 0;
}

TEST(PositionsTest, ValidPositionsBishop) {
    ChessGame::Bishop whiteBishop(true);

    // Test centre case paire (OK)
    positions B_3_4 = whiteBishop.changePosition(28); // Position 28
    positions B_3_4_Ref = { 1, 7, 10, 14, 19, 21, 28, 35, 37, 42, 46, 49, 55, 56 };
    std::sort(B_3_4.begin(), B_3_4.end());

    for (int i = 0; i < ssize(B_3_4_Ref); ++i) {
        EXPECT_EQ(B_3_4[i], B_3_4_Ref[i]) << "Vectors B_3_4 and B_3_4_Ref differ at index " << i;
    }

    // Test centre case impaire (OK)
    positions B_3_5 = whiteBishop.changePosition(29); // Position 29
    positions B_3_5_Ref = { 2, 11, 15, 20, 22, 29, 36, 38, 43, 47, 50, 57 };
    std::sort(B_3_5.begin(), B_3_5.end());

    for (int i = 0; i < ssize(B_3_5_Ref); ++i) {
        EXPECT_EQ(B_3_5[i], B_3_5_Ref[i]) << "Vectors B_3_5 and B_3_5_Ref differ at index " << i;
    }

    // Test haut case paire (OK)
    positions B_0_4 = whiteBishop.changePosition(4); // Position 4
    positions B_0_4_Ref = { 4, 11, 13, 18, 22, 25, 31, 32 };
    std::sort(B_0_4.begin(), B_0_4.end());

    for (int i = 0; i < ssize(B_0_4_Ref); ++i) {
        EXPECT_EQ(B_0_4[i], B_0_4_Ref[i]) << "Vectors B_0_4 and B_0_4_Ref differ at index " << i;
    }

    // Test haut case impaire (OK) 
    positions B_0_5 = whiteBishop.changePosition(5); // Position 5
    positions B_0_5_Ref = { 5, 12, 14, 19, 23, 26, 33, 40 };
    std::sort(B_0_5.begin(), B_0_5.end());

    for (int i = 0; i < ssize(B_0_5_Ref); ++i) {
        EXPECT_EQ(B_0_5[i], B_0_5_Ref[i]) << "Vectors B_0_5 and B_0_5_Ref differ at index " << i;
    }

    // Test gauche case (OK)
    positions B_3_0 = whiteBishop.changePosition(24); // Position 24
    positions B_3_0_Ref = { 3, 10, 17, 24, 33, 42, 51, 60 };
    std::sort(B_3_0.begin(), B_3_0.end());

    for (int i = 0; i < ssize(B_3_0_Ref); ++i) {
        EXPECT_EQ(B_3_0[i], B_3_0_Ref[i]) << "Vectors B_3_0 and B_3_0_Ref differ at index " << i;
    }

    // Test droite (OK)
    positions B_4_7 = whiteBishop.changePosition(39); // Position 39
    positions B_4_7_Ref = { 3, 12, 21, 30, 39, 46, 53, 60 };
    std::sort(B_4_7.begin(), B_4_7.end());

    for (int i = 0; i < ssize(B_4_7_Ref); ++i) {
        EXPECT_EQ(B_4_7[i], B_4_7_Ref[i]) << "Vectors B_4_7 and B_4_7_Ref differ at index " << i;
    }

    // Test bas case paire (OK)
    positions B_7_4 = whiteBishop.changePosition(60); // Position 60
    positions B_7_4_Ref = { 24, 33, 39, 42, 46, 51, 53, 60 };
    std::sort(B_7_4.begin(), B_7_4.end());

    for (int i = 0; i < ssize(B_7_4_Ref); ++i) {
        EXPECT_EQ(B_7_4[i], B_7_4_Ref[i]) << "Vectors B_7_4 and B_7_4_Ref differ at index " << i;
    }

    // Test bas case impaire (OK)
    positions B_7_5 = whiteBishop.changePosition(61); // Position 61
    positions B_7_5_Ref = { 16, 25, 34, 43, 47, 52, 54, 61 };
    std::sort(B_7_5.begin(), B_7_5.end());

    for (int i = 0; i < ssize(B_7_5_Ref); ++i) {
        EXPECT_EQ(B_7_5[i], B_7_5_Ref[i]) << "Vectors B_7_5 and B_7_5_Ref differ at index " << i;
    }

    // Test bas + gauche (OK)
    positions B_7_0 = whiteBishop.changePosition(56); // Position 56
    positions B_7_0_Ref = { 7, 14, 21, 28, 35, 42, 49, 56 };
    std::sort(B_7_0.begin(), B_7_0.end());

    for (int i = 0; i < ssize(B_7_0_Ref); ++i) {
        EXPECT_EQ(B_7_0[i], B_7_0_Ref[i]) << "Vectors B_7_0 and B_7_0_Ref differ at index " << i;
    }

    // Test bas + droite (OK)
    positions B_7_7 = whiteBishop.changePosition(63); // Position 63
    positions B_7_7_Ref = { 0, 9, 18, 27, 36, 45, 54, 63 };
    std::sort(B_7_7.begin(), B_7_7.end());

    for (int i = 0; i < ssize(B_7_7_Ref); ++i) {
        EXPECT_EQ(B_7_7[i], B_7_7_Ref[i]) << "Vectors B_7_7 and B_7_7_Ref differ at index " << i;
    }

    // Test haut + gauche (OK)
    positions B_0_0 = whiteBishop.changePosition(0); // Position 0
    positions B_0_0_Ref = { 0, 9, 18, 27, 36, 45, 54, 63 };
    std::sort(B_0_0.begin(), B_0_0.end());

    for (int i = 0; i < ssize(B_0_0_Ref); ++i) {
        EXPECT_EQ(B_0_0[i], B_0_0_Ref[i]) << "Vectors B_0_0 and B_0_0_Ref differ at index " << i;
    }

    // Test haut + droite (OK)
    positions B_0_7 = whiteBishop.changePosition(7); // Position 7
    positions B_0_7_Ref = { 7, 14, 21, 28, 35, 42, 49, 56 };
    std::sort(B_0_7.begin(), B_0_7.end());

    for (int i = 0; i < ssize(B_0_7_Ref); ++i) {
        EXPECT_EQ(B_0_7[i], B_0_7_Ref[i]) << "Vectors B_0_7 and B_0_7_Ref differ at index " << i;
    }
}

TEST(PositionsTest, ValidPositionsKnight) {
    ChessGame::Knight whiteKnight(true);

    // Test haut contrainte compl�te + centre (aucune contrainte)(OK)
    positions Kn_0_3 = whiteKnight.changePosition(3); // Position 3
    positions Kn_0_3_Ref = { 3, 9, 13, 18, 20 };
    std::sort(Kn_0_3.begin(), Kn_0_3.end());

    for (int i = 0; i < ssize(Kn_0_3_Ref); ++i) {
        EXPECT_EQ(Kn_0_3[i], Kn_0_3_Ref[i]) << "Vectors Kn_0_3 and Kn_0_3_Ref differ at index " << i;
    }

    // Test haut contrainte compl�te + gauche contrainte partielle (OK)  
    positions Kn_0_1 = whiteKnight.changePosition(1); // Position 1
    positions Kn_0_1_Ref = { 1, 11, 16, 18 };
    std::sort(Kn_0_1.begin(), Kn_0_1.end());

    for (int i = 0; i < ssize(Kn_0_1_Ref); ++i) {
        EXPECT_EQ(Kn_0_1[i], Kn_0_1_Ref[i]) << "Vectors Kn_0_1 and Kn_0_1_Ref differ at index " << i;
    }

    // Test haut contrainte compl�te + droite contrainte partielle (OK)
    positions Kn_0_6 = whiteKnight.changePosition(6); // Position 6
    positions Kn_0_6_Ref = { 6, 12, 21, 23 };
    std::sort(Kn_0_6.begin(), Kn_0_6.end());

    for (int i = 0; i < ssize(Kn_0_6_Ref); ++i) {
        EXPECT_EQ(Kn_0_6[i], Kn_0_6_Ref[i]) << "Vectors Kn_0_6 and Kn_0_6_Ref differ at index " << i;
    }

    // Test haut contrainte compl�te + gauche contrainte compl�te (OK)
    positions Kn_0_0 = whiteKnight.changePosition(0); // Position 0
    positions Kn_0_0_Ref = { 0, 10, 17 };
    std::sort(Kn_0_0.begin(), Kn_0_0.end());

    for (int i = 0; i < ssize(Kn_0_0_Ref); ++i) {
        EXPECT_EQ(Kn_0_0[i], Kn_0_0_Ref[i]) << "Vectors Kn_0_0 and Kn_0_0_Ref differ at index " << i;
    }

    // Test haut contrainte compl�te + droite contrainte compl�te (OK)
    positions Kn_0_7 = whiteKnight.changePosition(7); // Position 7
    positions Kn_0_7_Ref = { 7, 13, 22 };
    std::sort(Kn_0_7.begin(), Kn_0_7.end());

    for (int i = 0; i < ssize(Kn_0_7_Ref); ++i) {
        EXPECT_EQ(Kn_0_7[i], Kn_0_7_Ref[i]) << "Vectors Kn_0_7 and Kn_0_7_Ref differ at index " << i;
    }

    // Test haut contrainte partielle + centre (aucune contrainte)(OK)
    positions Kn_1_3 = whiteKnight.changePosition(11); // Position 11
    positions Kn_1_3_Ref = { 1, 5, 11, 17, 21, 26, 28 };
    std::sort(Kn_1_3.begin(), Kn_1_3.end());

    for (int i = 0; i < ssize(Kn_1_3_Ref); ++i) {
        EXPECT_EQ(Kn_1_3[i], Kn_1_3_Ref[i]) << "Vectors Kn_1_3 and Kn_1_3_Ref differ at index " << i;
    }

    // Test haut contrainte partielle + gauche contrainte partielle (OK)
    positions Kn_1_1 = whiteKnight.changePosition(9); // Position 9
    positions Kn_1_1_Ref = { 3, 9, 19, 24, 26 };
    std::sort(Kn_1_1.begin(), Kn_1_1.end());

    for (int i = 0; i < ssize(Kn_1_1_Ref); ++i) {
        EXPECT_EQ(Kn_1_1[i], Kn_1_1_Ref[i]) << "Vectors Kn_1_1 and Kn_1_1_Ref differ at index " << i;
    }

    // Test haut contrainte partielle + droite contrainte partielle (OK)
    positions Kn_1_6 = whiteKnight.changePosition(14); // Position 14
    positions Kn_1_6_Ref = { 4, 14, 20, 29, 31 };
    std::sort(Kn_1_6.begin(), Kn_1_6.end());

    for (int i = 0; i < ssize(Kn_1_6_Ref); ++i) {
        EXPECT_EQ(Kn_1_6[i], Kn_1_6_Ref[i]) << "Vectors Kn_1_6 and Kn_1_6_Ref differ at index " << i;
    }

    // Test haut contrainte partielle + gauche contrainte compl�te (OK)
    positions Kn_1_0 = whiteKnight.changePosition(8); // Position 8
    positions Kn_1_0_Ref = { 2, 8, 18, 25 };
    std::sort(Kn_1_0.begin(), Kn_1_0.end());

    for (int i = 0; i < ssize(Kn_1_0_Ref); ++i) {
        EXPECT_EQ(Kn_1_0[i], Kn_1_0_Ref[i]) << "Vectors Kn_1_0 and Kn_1_0_Ref differ at index " << i;
    }

    // Test haut contrainte partielle + droite contrainte compl�te (OK)
    positions Kn_1_7 = whiteKnight.changePosition(15); // Position 15
    positions Kn_1_7_Ref = { 5, 15, 21, 30 };
    std::sort(Kn_1_7.begin(), Kn_1_7.end());

    for (int i = 0; i < ssize(Kn_1_7_Ref); ++i) {
        EXPECT_EQ(Kn_1_7[i], Kn_1_7_Ref[i]) << "Vectors Kn_1_7 and Kn_1_7_Ref differ at index " << i;
    }

    // Test centre (aucune contrainte) + centre (aucune contrainte)(OK)
    positions Kn_3_4 = whiteKnight.changePosition(28); // Position 28
    positions Kn_3_4_Ref = { 11, 13, 18, 22, 28, 34, 38, 43, 45 };
    std::sort(Kn_3_4.begin(), Kn_3_4.end());

    for (int i = 0; i < ssize(Kn_3_4_Ref); ++i) {
        EXPECT_EQ(Kn_3_4[i], Kn_3_4_Ref[i]) << "Vectors Kn_3_4 and Kn_3_4_Ref differ at index " << i;
    }

    // Test centre (aucune contrainte) + gauche contrainte partielle (OK)
    positions Kn_4_1 = whiteKnight.changePosition(33); // Position 33
    positions Kn_4_1_Ref = { 16, 18, 27, 33, 43, 48, 50 };
    std::sort(Kn_4_1.begin(), Kn_4_1.end());

    for (int i = 0; i < ssize(Kn_4_1_Ref); ++i) {
        EXPECT_EQ(Kn_4_1[i], Kn_4_1_Ref[i]) << "Vectors Kn_4_1 and Kn_4_1_Ref differ at index " << i;
    }

    // Test centre (aucune contrainte) + droite contrainte partielle (OK)
    positions Kn_4_6 = whiteKnight.changePosition(38); // Position 38
    positions Kn_4_6_Ref = { 21, 23, 28, 38, 44, 53, 55 };
    std::sort(Kn_4_6.begin(), Kn_4_6.end());

    for (int i = 0; i < ssize(Kn_4_6_Ref); ++i) {
        EXPECT_EQ(Kn_4_6[i], Kn_4_6_Ref[i]) << "Vectors Kn_4_6 and Kn_4_6_Ref differ at index " << i;
    }

    // Test centre (aucune contrainte) + gauche contrainte compl�te (OK)
    positions Kn_4_0 = whiteKnight.changePosition(32); // Position 32
    positions Kn_4_0_Ref = { 17, 26, 32, 42, 49 };
    std::sort(Kn_4_0.begin(), Kn_4_0.end());

    for (int i = 0; i < ssize(Kn_4_0_Ref); ++i) {
        EXPECT_EQ(Kn_4_0[i], Kn_4_0_Ref[i]) << "Vectors Kn_4_0 and Kn_4_0_Ref differ at index " << i;
    }

    // Test centre (aucune contrainte) + droite contrainte compl�te (OK)
    positions Kn_4_7 = whiteKnight.changePosition(39); // Position 39
    positions Kn_4_7_Ref = { 22, 29, 39, 45, 54 };
    std::sort(Kn_4_7.begin(), Kn_4_7.end());

    for (int i = 0; i < ssize(Kn_4_7_Ref); ++i) {
        EXPECT_EQ(Kn_4_7[i], Kn_4_7_Ref[i]) << "Vectors Kn_4_7 and Kn_4_7_Ref differ at index " << i;
    }

    // Test bas contrainte compl�te + centre (aucune contrainte) (OK)
    positions Kn_7_3 = whiteKnight.changePosition(59); // Position 59
    positions Kn_7_3_Ref = { 42, 44, 49, 53, 59 };
    std::sort(Kn_7_3.begin(), Kn_7_3.end());

    for (int i = 0; i < ssize(Kn_7_3_Ref); ++i) {
        EXPECT_EQ(Kn_7_3[i], Kn_7_3_Ref[i]) << "Vectors Kn_7_3 and Kn_7_3_Ref differ at index " << i;
    }

    // Test bas contrainte compl�te + gauche contrainte partielle (OK)
    positions Kn_7_1 = whiteKnight.changePosition(57); // Position 57
    positions Kn_7_1_Ref = { 40, 42, 51, 57 };
    std::sort(Kn_7_1.begin(), Kn_7_1.end());

    for (int i = 0; i < ssize(Kn_7_1_Ref); ++i) {
        EXPECT_EQ(Kn_7_1[i], Kn_7_1_Ref[i]) << "Vectors Kn_7_1 and Kn_7_1_Ref differ at index " << i;
    }

    // Test bas contrainte compl�te + droite contrainte partielle (OK)
    positions Kn_7_6 = whiteKnight.changePosition(62); // Position 62
    positions Kn_7_6_Ref = { 45, 47, 52, 62 };
    std::sort(Kn_7_6.begin(), Kn_7_6.end());

    for (int i = 0; i < ssize(Kn_7_6_Ref); ++i) {
        EXPECT_EQ(Kn_7_6[i], Kn_7_6_Ref[i]) << "Vectors Kn_7_6 and Kn_7_6_Ref differ at index " << i;
    }

    // Test bas contrainte compl�te + gauche contrainte compl�te (OK)
    positions Kn_7_0 = whiteKnight.changePosition(56); // Position 56
    positions Kn_7_0_Ref = { 41, 50, 56 };
    std::sort(Kn_7_0.begin(), Kn_7_0.end());

    for (int i = 0; i < ssize(Kn_7_0_Ref); ++i) {
        EXPECT_EQ(Kn_7_0[i], Kn_7_0_Ref[i]) << "Vectors Kn_7_0 and Kn_7_0_Ref differ at index " << i;
    }

    // Test bas contrainte compl�te + droite contrainte compl�te (OK)
    positions Kn_7_7 = whiteKnight.changePosition(63); // Position 63
    positions Kn_7_7_Ref = { 46, 53, 63 };
    std::sort(Kn_7_7.begin(), Kn_7_7.end());

    for (int i = 0; i < ssize(Kn_7_7_Ref); ++i) {
        EXPECT_EQ(Kn_7_7[i], Kn_7_7_Ref[i]) << "Vectors Kn_7_7 and Kn_7_7_Ref differ at index " << i;
    }

    // Test bas contrainte partielle + centre (aucune contrainte) (OK)
    positions Kn_6_3 = whiteKnight.changePosition(51); // Position 51
    positions Kn_6_3_Ref = { 34, 36, 41, 45, 51, 57, 61 };
    std::sort(Kn_6_3.begin(), Kn_6_3.end());

    for (int i = 0; i < ssize(Kn_6_3_Ref); ++i) {
        EXPECT_EQ(Kn_6_3[i], Kn_6_3_Ref[i]) << "Vectors Kn_6_3 and Kn_6_3_Ref differ at index " << i;
    }

    // Test bas contrainte partielle + gauche contrainte partielle (OK)
    positions Kn_6_1 = whiteKnight.changePosition(49); // Position 49
    positions Kn_6_1_Ref = { 32, 34, 43, 49, 59 };
    std::sort(Kn_6_1.begin(), Kn_6_1.end());

    for (int i = 0; i < ssize(Kn_6_1_Ref); ++i) {
        EXPECT_EQ(Kn_6_1[i], Kn_6_1_Ref[i]) << "Vectors Kn_6_1 and Kn_6_1_Ref differ at index " << i;
    }

    // Test bas contrainte partielle + droite contrainte partielle (OK)
    positions Kn_6_6 = whiteKnight.changePosition(54); // Position 54
    positions Kn_6_6_Ref = { 37, 39, 44, 54, 60 };
    std::sort(Kn_6_6.begin(), Kn_6_6.end());

    for (int i = 0; i < ssize(Kn_6_6_Ref); ++i) {
        EXPECT_EQ(Kn_6_6[i], Kn_6_6_Ref[i]) << "Vectors Kn_6_6 and Kn_6_6_Ref differ at index " << i;
    }

    // Test bas contrainte partielle + gauche contrainte compl�te (OK)
    positions Kn_6_0 = whiteKnight.changePosition(48); // Position 48
    positions Kn_6_0_Ref = { 33, 42, 48, 58 };
    std::sort(Kn_6_0.begin(), Kn_6_0.end());

    for (int i = 0; i < ssize(Kn_6_0_Ref); ++i) {
        EXPECT_EQ(Kn_6_0[i], Kn_6_0_Ref[i]) << "Vectors Kn_6_0 and Kn_6_0_Ref differ at index " << i;
    }

    // Test bas contrainte partielle + droite contrainte compl�te (OK)
    positions Kn_6_7 = whiteKnight.changePosition(55); // Position 55
    positions Kn_6_7_Ref = { 38, 45, 55, 61 };
    std::sort(Kn_6_7.begin(), Kn_6_7.end());

    for (int i = 0; i < ssize(Kn_6_7_Ref); ++i) {
        EXPECT_EQ(Kn_6_7[i], Kn_6_7_Ref[i]) << "Vectors Kn_6_7 and Kn_6_7_Ref differ at index " << i;
    }
}

TEST(PieceCreationTest, ValidCreationKing) {
    using namespace ChessGame;
    using namespace std;
    BoardGame jeu;

    try {
        auto whiteKing = ChessGame::King(true);
        jeu.insertNewPiece(9, make_unique<ChessGame::King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }
    try {
        auto blackKing = ChessGame::King(false);
        jeu.insertNewPiece(27, make_unique<ChessGame::King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }
    try {
        auto whiteKing2 = ChessGame::King(true);
        jeu.insertNewPiece(18, make_unique<ChessGame::King>(whiteKing2));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }
    try {
        auto blackKing2 = ChessGame::King(false);
        jeu.insertNewPiece(35, make_unique<ChessGame::King>(blackKing2));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }
    
    positions positionsKing;
    positions positionsKing_ref = {9, 27};
    for(int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            int position = row * 8 + col;
            if (!jeu.squareIsFree(position)) {
                positionsKing.push_back(position);
            }
        }
    }

    for (int i = 0; i < ssize(positionsKing_ref); ++i) {
        EXPECT_EQ(positionsKing[i], positionsKing_ref[i]) << "Vectors positionsKing and positionsKing_ref differ at index " << i;
    }
}

TEST(ChessTest, ValidCheckMate1) {
    using namespace ChessGame;
    using namespace std;

    // Checkmate: Bishop and knight mate
    BoardGame jeu;

    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(7, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }
    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(22, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }
    Bishop blackBishop = Bishop(false);
    jeu.insertNewPiece(21, make_unique<Bishop>(blackBishop));

    auto blackKnight = Knight(false);
    jeu.insertNewPiece(23, make_unique<Knight>(blackKnight));

    bool isCheckMate_ref1 = true;
    bool isCheckMate1 = jeu.isChessMate(7);
    EXPECT_EQ(isCheckMate1, isCheckMate_ref1) << "The boolean value of isCheckMate1 and isCheckMate_ref1 differ";
}

TEST(ChessTest, ValidCheckMate2) {
    using namespace ChessGame;
    using namespace std;
    // Checkmate: King and two bishops mate

    BoardGame jeu;

    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(7, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }
    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(23, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }
    auto blackBishop = Bishop(false);
    jeu.insertNewPiece(20, make_unique<Bishop>(blackBishop));

    auto blackBishop2 = Bishop(false);
    jeu.insertNewPiece(21, make_unique<Bishop>(blackBishop2));

    bool isCheckMate_ref2 = true;
    bool isCheckMate2 = jeu.isChessMate(7);
    EXPECT_EQ(isCheckMate2, isCheckMate_ref2) << "The boolean value of isCheckMate2 and isCheckMate_ref2 differ";
}

TEST(ChessTest, ValidCheckMate3) {
    using namespace ChessGame;
    using namespace std;
    // Not a Checkmate : is a Chess

    BoardGame jeu;
    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(19, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(0, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    auto blackBishop = Bishop(false);
    jeu.insertNewPiece(46, make_unique<Bishop>(blackBishop));

    bool isCheckMate_ref3 = false;
    bool isCheckMate3 = jeu.isChessMate(19);
    EXPECT_EQ(isCheckMate3, isCheckMate_ref3) << "The boolean value of isChess3 and isChess_ref3 differ";  
}

TEST(ChessTest, ValidCheckMate4) {
    using namespace ChessGame;
    using namespace std;
    //Not a CheckMate : king is protected by bishop

    BoardGame jeu;

    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(7, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }
    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(22, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }
    Bishop blackBishop = Bishop(false);
    jeu.insertNewPiece(21, make_unique<Bishop>(blackBishop));

    Bishop whiteBishop = Bishop(true);
    jeu.insertNewPiece(15, make_unique<Bishop>(whiteBishop));

    bool isCheckMate_ref4 = false;
    bool isCheckMate4 = jeu.isChessMate(7);
    EXPECT_EQ(isCheckMate4, isCheckMate_ref4) << "The boolean value of isCheckMate4 and isCheckMate_ref4 differ";
}


TEST(ChessTest, ValidCheck1) {
    using namespace ChessGame;
    using namespace std;

    // Chess : White king is in chess by the bishop
    BoardGame jeu;
    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(19, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }
    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(0, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    auto blackBishop = Bishop(false);
    jeu.insertNewPiece(46, make_unique<Bishop>(blackBishop));

    bool isChess_ref1 = true;
    bool isChess1 = jeu.chessOnActualCase(19);
    EXPECT_EQ(isChess1, isChess_ref1) << "The boolean value of isChess1 and isChess_ref1 differ";

}

TEST(ChessTest, ValidCheck2) {
    using namespace ChessGame;
    using namespace std;
    // Chess : White king is in chess by the knight
    BoardGame jeu;
    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(34, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(0, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    Bishop whiteBishop = Bishop(true);
    jeu.insertNewPiece(43, make_unique<Bishop>(whiteBishop));

    auto blackKnight = Knight(false);
    jeu.insertNewPiece(51, make_unique<Knight>(blackKnight));

    bool isChess_ref2 = true;
    bool isChess2 = jeu.chessOnActualCase(34);
    EXPECT_EQ(isChess2, isChess_ref2) << "The boolean value of isChess2 and isChess_ref2 differ";
}

TEST(ChessTest, ValidCheck3) {
    using namespace ChessGame;
    using namespace std;
    // Not a Chess : White king ''is in chess'' by white knight
    BoardGame jeu;
    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(34, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }
    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(0, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    Bishop whiteBishop = Bishop(true);
    jeu.insertNewPiece(43, make_unique<Bishop>(whiteBishop));

    auto whiteKnight = Knight(true);
    jeu.insertNewPiece(51, make_unique<Knight>(whiteKnight));

    bool isChess_ref3 = false;
    bool isChess3 = jeu.chessOnActualCase(34);
    EXPECT_EQ(isChess3, isChess_ref3) << "The boolean value of isChess3 and isChess_ref3 differ";
}

TEST(ChessTest, ValidCheck4) {
    using namespace ChessGame;
    using namespace std;
    // Not a Chess : White king is not in chess by black knight
    BoardGame jeu;
    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(34, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(0, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    auto blackKnight = Knight(false);
    jeu.insertNewPiece(52, make_unique<Knight>(blackKnight));

    bool isChess_ref4 = false;
    bool isChess4 = jeu.chessOnActualCase(34);
    EXPECT_EQ(isChess4, isChess_ref4) << "The boolean value of isChess4 and isChess_ref4 differ";
}

TEST(MovesTest, ValidMove1) {
    using namespace ChessGame;
    using namespace std;
    // Invalid move: Bishop cannot go to destination because of a piece in its way.
    BoardGame jeu;

    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(7, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(0, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    Bishop blackBishop = Bishop(false);
    jeu.insertNewPiece(27, make_unique<Bishop>(blackBishop));

    Bishop whiteBishop = Bishop(true);
    jeu.insertNewPiece(45, make_unique<Bishop>(whiteBishop));

    jeu.movePiece(27, 63);

    bool isSuccessfulMove_ref1 = false;
    bool isSuccessfulMove1 = jeu.getSuccessfulMove();
    EXPECT_EQ(isSuccessfulMove1, isSuccessfulMove_ref1) << "The boolean value of isSuccessfulMove1 and isSuccessfulMove_ref1 differ";
}

TEST(MovesTest, ValidMove2) {
    using namespace ChessGame;
    using namespace std;
    // Invalid move: King cannot move, this move will put himself in check by the bishop
    BoardGame jeu;

    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(26, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(0, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    Bishop blackBishop = Bishop(false);
    jeu.insertNewPiece(45, make_unique<Bishop>(blackBishop));

    jeu.movePiece(26, 27);

    bool isSuccessfulMove_ref2 = false;
    bool isSuccessfulMove2 = jeu.getSuccessfulMove();
    EXPECT_EQ(isSuccessfulMove2, isSuccessfulMove_ref2) << "The boolean value of isSuccessfulMove2 and isSuccessfulMove_ref2 differ";
}

TEST(MovesTest, ValidMove3) {
    using namespace ChessGame;
    using namespace std;
    // Valid move: King can move, this move will put himself "in check" by piece of same color
    BoardGame jeu;

    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(26, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(0, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    Bishop blackBishop = Bishop(false);
    jeu.insertNewPiece(45, make_unique<Bishop>(blackBishop));

    jeu.movePiece(26, 27);

    bool isSuccessfulMove_ref3 = true;
    bool isSuccessfulMove3 = jeu.getSuccessfulMove();
    EXPECT_EQ(isSuccessfulMove3, isSuccessfulMove_ref3) << "The boolean value of isSuccessfulMove3 and isSuccessfulMove_ref3 differ";
}

TEST(MovesTest, ValidMove4) {
    using namespace ChessGame;
    using namespace std;
    // Invalid move: Bishop cannot move, this move will put his king in check by the other bishop
    BoardGame jeu;

    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(18, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(0, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    Bishop whiteBishop = Bishop(true);
    jeu.insertNewPiece(27, make_unique<Bishop>(whiteBishop));

    Bishop blackBishop = Bishop(false);
    jeu.insertNewPiece(45, make_unique<Bishop>(blackBishop));

    jeu.movePiece(27, 34);

    bool isSuccessfulMove_ref4 = false;
    bool isSuccessfulMove4 = jeu.getSuccessfulMove();
    EXPECT_EQ(isSuccessfulMove4, isSuccessfulMove_ref4) << "The boolean value of isSuccessfulMove4 and isSuccessfulMove_ref4 differ";
}

TEST(MovesTest, ValidMove5) {
    using namespace ChessGame;
    using namespace std;
    // Valid move: Bishop can move, this move will not put his king in check by the other bishop
    BoardGame jeu;

    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(18, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(0, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    Bishop whiteBishop = Bishop(true);
    jeu.insertNewPiece(27, make_unique<Bishop>(whiteBishop));

    Bishop whiteBishop2 = Bishop(true);
    jeu.insertNewPiece(45, make_unique<Bishop>(whiteBishop2));

    jeu.movePiece(27, 34);

    bool isSuccessfulMove_ref5 = true;
    bool isSuccessfulMove5= jeu.getSuccessfulMove();
    EXPECT_EQ(isSuccessfulMove5, isSuccessfulMove_ref5) << "The boolean value of isSuccessfulMove5 and isSuccessfulMove_ref5 differ";
}


TEST(MovesTest, ValidMove6) {
    using namespace ChessGame;
    using namespace std;
    // Valid move: Bishop can move on empty case + this move will not put his king in check by the other bishop
    BoardGame jeu;

    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(18, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(0, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    Bishop whiteBishop = Bishop(true);
    jeu.insertNewPiece(27, make_unique<Bishop>(whiteBishop));

    jeu.movePiece(27, 34);

    bool isSuccessfulMove_ref6 = true;
    bool isSuccessfulMove6 = jeu.getSuccessfulMove();
    EXPECT_EQ(isSuccessfulMove6, isSuccessfulMove_ref6) << "The boolean value of isSuccessfulMove6 and isSuccessfulMove_ref6 differ";
}


TEST(MovesTest, ValidMove7) {
    using namespace ChessGame;
    using namespace std;
    // Invalid move: selected case is empty
    BoardGame jeu;

    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(18, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(0, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    Bishop whiteBishop = Bishop(true);
    jeu.insertNewPiece(27, make_unique<Bishop>(whiteBishop));

    jeu.movePiece(33, 34);

    bool isSuccessfulMove_ref7 = false;
    bool isSuccessfulMove7 = jeu.getSuccessfulMove();
    EXPECT_EQ(isSuccessfulMove7, isSuccessfulMove_ref7) << "The boolean value of isSuccessfulMove7 and isSuccessfulMove_ref7 differ";
}

TEST(MovesTest, ValidMove8) {
    using namespace ChessGame;
    using namespace std;
    // Invalid move: bishop wants to take piece of same color
    BoardGame jeu;

    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(18, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }
    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(0, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    Bishop whiteBishop = Bishop(true);
    jeu.insertNewPiece(27, make_unique<Bishop>(whiteBishop));

    jeu.movePiece(27, 18);

    bool isSuccessfulMove_ref8 = false;
    bool isSuccessfulMove8 = jeu.getSuccessfulMove();
    EXPECT_EQ(isSuccessfulMove8, isSuccessfulMove_ref8) << "The boolean value of isSuccessfulMove8 and isSuccessfulMove_ref8 differ";
}


TEST(MovesTest, ValidMove9) {
    using namespace ChessGame;
    using namespace std;
    // Valid move: black bishop takes white king
    BoardGame jeu;

    try {
        auto whiteKing = King(true);
        jeu.insertNewPiece(18, make_unique<King>(whiteKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    try {
        auto blackKing = King(false);
        jeu.insertNewPiece(0, make_unique<King>(blackKing));
    }
    catch (King::InvalidPieceError) {
        std::cout << "Only two kings are allowed : creation of King failed" << std::endl;
    }

    Bishop blackBishop = Bishop(false);
    jeu.insertNewPiece(27, make_unique<Bishop>(blackBishop));

    jeu.movePiece(27, 18);

    bool isSuccessfulMove_ref9 = true;
    bool isSuccessfulMove9 = jeu.getSuccessfulMove();
    EXPECT_EQ(isSuccessfulMove9, isSuccessfulMove_ref9) << "The boolean value of isSuccessfulMove9 and isSuccessfulMove_ref9 differ";
}