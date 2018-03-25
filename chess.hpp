#include <iostream>

class pieces{

    public:
        int pawn = 100;
        int bishop = 101;
        int knight = 110;
        int king = 011;
        int queen = 010;
        int rook = 001;

};

class boards{

public:
    int board[7][7];
    pieces piece;

};

class games{

public:
    boards board;

    void initializeBoard(){

        for(int j = 0; j<8; j++){
        for(int i = 0; i < 8; i++){
        board.board[j][i] = 0;
            }
        }

        //for(int j = 0; j<8; j++){
        for(int i = 0; i < 8; i++){
        board.board[2][i] = 101;
            }
        //}

    }

    void printBoard(){

       for(int j = 0; j<8; j++){
        for(int i = 0; i < 8; i++){
        std::cout << board.board[j][i];
            }
            std::cout << std::endl;
        }

    }
};
