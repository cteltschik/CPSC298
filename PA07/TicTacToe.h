//
//  TicTacToe.h
//  ImplementProj_07
//
//  Created by Charley Teltschik on 5/12/24.
//

#ifndef TicTacToe_h
#define TicTacToe_h

class TicTacToe {
    
private:
    char** pp_cGrid = new char* [3]; ///< Pointer (p) to (pointer to character (p_c))
    
public:
    TicTacToe();
    ~TicTacToe();
    
    void displayBoard();
    
    void displayBoard(int row, int col);
    
    char winnerCheck();
    
    void playerMove(char player);
    
    void computerMove(char computer);
    
    void play();
};


#endif /* TicTacToe_h */

