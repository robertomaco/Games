#include <iostream>

class pieces{

    public:
        int pawn = 1;
        int bishop = 3;
        int knight = 2;
        int king = 6;
        int queen = 5;
        int rook = 4;

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
        board.board[2][i] = board.piece.pawn;
            }
        //}

    }

    void printBoard(){

       for(int j = 0; j<8; j++){
        for(int i = 0; i < 8; i++){
        std::cout << board.board[j][i] << " ";
            }
            std::cout << std::endl;
        }

    }
};
