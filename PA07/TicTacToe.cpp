
/// @file TicTacToe.cpp
/// @brief Implementation file for Game class
/// @author teltschik@chapman.edu
/// CPSC 298-6 Colloquium: Programming in C++
#include <iostream> // defines std::cout
#include <cmath> // defines std::abs
#include <random> // defines random number generation functions
#include <ctime> // defines time()
//#define TEST // macro to enable test mode functionality (not used during ordinary gameplay)
#define DIAG // macro to enable diagnostic output (not used during ordinary gameplay)
#include "TicTacToe.h"

TicTacToe::TicTacToe() {
    pp_cGrid = new char* [3];
        for (int i = 0; i < 3; ++i) {
            pp_cGrid[i] = new char[3]; // array of three characters
                for (int j = 0; j < 3; ++j) {
                    pp_cGrid[i][j] = '~';
                }
            }
}
    
TicTacToe::~TicTacToe() {
        for (int i = 0; i < 3; ++i) {
            delete[] pp_cGrid[i]; }
        
        delete[] pp_cGrid;}
    
void TicTacToe::displayBoard() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                std::cout << pp_cGrid[i][j];}
            std::cout << std::endl;
        }
}
    
void TicTacToe::displayBoard(int row, int col){
        for (int i = 0; i < 3; i++) {
               for (int j = 0; j < 3; j++) {
                   if (i == row && j == col) {
                       std::cout << pp_cGrid[i][j];
                   } else {
                       std::cout << pp_cGrid[i][j];}
               }
               std::cout << std::endl;}
    }
    
    
char TicTacToe::winnerCheck(){
        for(int i = 0; i < 3; i++){
            if((pp_cGrid[i][0] == pp_cGrid[i][1]) &&
               (pp_cGrid[i][1] == pp_cGrid[i][2]) &&
               (pp_cGrid[i][2] == pp_cGrid[i][0])){
                return pp_cGrid[i][0];}
            
            if((pp_cGrid[0][i] == pp_cGrid[1][i]) &&
               (pp_cGrid[1][i] == pp_cGrid[2][i]) &&
               (pp_cGrid[2][i] == pp_cGrid[0][i])){
                return pp_cGrid[0][i];}
        }
        
        
        if ((pp_cGrid[0][0] == pp_cGrid[1][1]) &&
            (pp_cGrid[1][1] == pp_cGrid[2][2]) &&
            (pp_cGrid[0][0] != '~')){
            return pp_cGrid[0][0];}
        
        if (pp_cGrid[0][2] == pp_cGrid[1][1] &&
            pp_cGrid[1][1] == pp_cGrid[2][0] &&
            pp_cGrid[0][2] != '~'){
            return pp_cGrid[0][2];}
        else{
            return '~';}
    }
    
    
    
void TicTacToe::playerMove(char player){
        int row;
        int col;
        std::cout << "Please enter a grid row number: " << std::endl;
        std::cin >> row;
        row--;
        std::cout << "Please enter a grid column number: " << std::endl;
        std::cin >> col;
        col--;
        
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                pp_cGrid[row][col] = player;
            }
        }
        displayBoard(row, col);
        std::cout << std::endl;
    }
    
    
void TicTacToe::computerMove(char computer){
        int row, col;
        do{
            row = rand() % 3;
            col = rand() % 3;}
        while (pp_cGrid[row][col] != '~');
        
        pp_cGrid[row][col] = computer;
        displayBoard(row, col);
        std::cout << std::endl;
    }
    
    
void TicTacToe::play(){
        srand(time(0));
        char currPlayer = 'X';
        int movesLeft = 9;
        char playerWin = '~';
        
        while (movesLeft > 0 || playerWin == '~') {
            if (currPlayer == 'X') {
                playerMove(currPlayer);
                playerWin = winnerCheck();
                movesLeft--;
                currPlayer = 'O';
            } else {
                computerMove(currPlayer);
                playerWin = winnerCheck();
                movesLeft--;
                currPlayer = 'X';}
        
        
        if (playerWin != '~') {
            if (playerWin == 'X' || playerWin == 'O') {
                std::cout << "WINNER: " << playerWin << std::endl;
                std::cout << "Game Over." << std::endl;
                break;
            }
            else {
                std::cout << "It's a draw!" << std::endl;
                std::cout << "Game Over." << std::endl;
                break;}}
        }
}


