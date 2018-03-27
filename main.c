#include <stdio.h>
#include <stdlib.h>
#include "chess.h"
#include "blackjack.h"

int main(){

deck* d = (deck*) malloc(sizeof(deck));
hand* pHand = (hand*) calloc(2, sizeof(hand));
hand* dHand = (hand*) calloc(4, sizeof(hand));

/* generateDeck(d);
printDeck(d);

resetHand(pHand);
dealHand(pHand, d);
printHand(pHand); */
game(dHand, pHand, d);

/* free(pHand);
free(dHand);
free(d); */

return 0;

}