#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "chess.h"
#include "blackjack.h"
#include "tictactoe.h"

int main(){
    
srand(time(NULL));

tboard* tb = (tboard*) malloc(sizeof(board));
deck* d = (deck*) calloc(2, sizeof(deck));
hand* pHand = (hand*) calloc(2,sizeof(hand));
hand* dHand = (hand*) calloc(2,sizeof(hand));

/* generateDeck(d);
printDeck(d);

resetHand(pHand);
dealHand(pHand, d);
printHand(pHand); 
game(dHand, pHand, d);
printf("\n%p\n%p\n%p\n", d, pHand, dHand);
*/

initializetBoard(tb);
printtBoard(tb);
gameLoop(tb);

/* free(pHand);
free(dHand);
free(d);
free(b);  */

return 0;

}