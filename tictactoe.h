#include <stdio.h>
#include <stdlib.h>

typedef struct tboard{

    int board[2][2];

}tboard;

tboard initializetBoard(tboard* b){

for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
        b->board[i][j] = 0;
    }
}

}

void printtBoard(tboard* b){
    printf("Board\n");
for(int i = 0; i<=2; i++){
    printf("\n");
    for(int j = 0; j<=2; j++){
       printf("%d ", b->board[i][j]); 
    }
    
}
}

void gameAI(tboard *b){



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
printf("%d", b->board[1][3]);
printtBoard(b);
}

void gameLoop(tboard *b){

int turn = 0;
int win = 0;

while(win == 0){
playerTurn(b);
win = 1;
}

}