#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "chess.h"
#include "blackjack.h"

int main(){
    
srand(time(NULL));

deck* d = (deck*) malloc(sizeof(deck));
hand* pHand = (hand*) calloc(2,sizeof(hand));
hand* dHand = (hand*) calloc(2,sizeof(hand));

/* generateDeck(d);
printDeck(d);

resetHand(pHand);
dealHand(pHand, d);
printHand(pHand); */
game(dHand, pHand, d);
printf("\n%p\n%p\n%p\n", d, pHand, dHand);

/* free(pHand);
free(dHand);
free(d); */

return 0;

}