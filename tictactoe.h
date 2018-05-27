#include <stdio.h>
#include <stdlib.h>

typedef struct tboard{

    int board[3][3];

}tboard;

tboard initializetBoard(tboard* b){

for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
        b->board[i][j] = 3;
    }
}

}

void printtBoard(tboard* b){

printf("\nBoard\n");

for(int i = 0; i<3; i++){
    printf("\n");
    for(int j = 0; j<3; j++){
       printf("%d ", b->board[i][j]); 
    }
    

} 
}


void printtBoardDebug(tboard* b){

for (int *ip = &b->board[0][0]; ip <= &b->board[3][3]; ip++){

printf("%d\n", *ip);
} 
printf("\nBoard\n");

for(int i = 0; i<3; i++){
    printf("\n");
    for(int j = 0; j<3; j++){
       printf("%p ", &b->board[i][j]); 
    }
    

} 

printf("\n");

for(int i = 0; i<3; i++){
    printf("\n");
    for(int j = 0; j<3; j++){
       printf("[%d][%d] is %d ", i,j ,b->board[i][j]); 
    }
    
} 
}

void gameAI(tboard *b){



}

int winCondition(tboard *b){

if(b->board[0][0] == 1 && b->board[0][1] == 1 && b->board[0][2] == 1){
    return 1;
}

if(b->board[1][0] == 1 && b->board[1][1] == 1 && b->board[1][2] == 1){
    return 1;
}

if(b->board[2][0] == 1 && b->board[2][1] == 1 && b->board[2][2] == 1){
    return 1;
}

if(b->board[0][0] == 1 && b->board[1][0] == 1 && b->board[2][0] == 1){
    return 1;
}

if(b->board[0][1] == 1 && b->board[1][1] == 1 && b->board[2][1] == 1){
    return 1;
}

if(b->board[0][2] == 1 && b->board[1][2] == 1 && b->board[2][2] == 1){
    return 1;
}

if(b->board[0][0] == 1 && b->board[1][1] == 1 && b->board[2][2] == 1){
    return 1;
}

if(b->board[0][2] == 1 && b->board[1][1] == 1 && b->board[2][0] == 1){
    return 1;
}

}

void playerTurn(tboard *b){

int x, y;

printf("\n\nPlayer turn\n\n");
do {
printf("Enter x co-ordinate: ");
scanf("%d", &x);
printf("\nEnter y co-ordinate: ");
scanf("%d", &y);
}while(x < 1 || x > 3 || y < 1 || y > 3);

b->board[x-1][y-1] = 1;
printf("%d\n", b->board[1][1]);
printtBoard(b);
}

void gameLoop(tboard *b){

int turn = 0;
int win = 0;

while(win == 0){
playerTurn(b);
printf("\n\n%d\n\n", winCondition(b));
if(winCondition(b) == 1)
win = 1;
}
printf("\n\nYOU WIN!\n\n");
}