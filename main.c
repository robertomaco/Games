#include <stdio.h>
#include <stdlib.h>
#include "chess.h"
#include "blackjack.h"

int main(){

deck* d = (deck*) malloc(sizeof(deck));
hand* pHand = (hand*) malloc(sizeof(deck));
hand* dHand = (hand*) malloc(sizeof(deck));

/* generateDeck(d);
printDeck(d);

resetHand(pHand);
dealHand(pHand, d);
printHand(pHand); */
game(dHand, pHand, d);

free(pHand);
free(dHand);
free(d);

return 0;

}