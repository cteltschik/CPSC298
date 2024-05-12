//
//  main.cpp
//  ImplementProj_07
//
//  Created by Charley Teltschik on 5/12/24.
//

#include "TicTacToe.h"

int main(){
    TicTacToe* p_game = new TicTacToe();
    p_game->play();
    delete p_game;
    
    return 0;
};
