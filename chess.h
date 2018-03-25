#include <stdio.h>
#include <stdlib.h>

typedef struct board{

    int board[8][8];
    

} board;

typedef struct piece{

    int colour;
    int rank;

}piece; 

void initBoard(){

    board mainBoard;

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            mainBoard.board[i][j] = 0;
        }
    }

    //for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            mainBoard.board[1][j] = 02;
        }
    //}

}

void printBoard(){
    board mainBoard;
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            printf("%d ", mainBoard.board[i][j]);
        }
        printf("\n");
    }

}