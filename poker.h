#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cards{

    char suite[5];
    int rank;

}card;

typedef struct decks{

    card deck[51];

}deck;

void generateDeck(){

    deck d;

    for(int i = 0; i==13; i++){

        
        strcpy(d.deck[i].suite, "Club");
        d.deck[i].rank = i;

    }



}

void printDeck(){

deck *d;

for(int i = 0; i<13; i++){
    printf("%d of %s", d->deck->rank, d->deck->suite);

}
}