#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct card{

    char suite[10];
    int rank;

}card;

typedef struct deck{

    card deckofCards[52];

}deck;

void generateDeck(){

    deck d;

    for(int i = 0; i<13; i++){

        
        strcpy(d.deckofCards[i].suite, "Clubs");
        d.deckofCards[i].rank = i+1;
        //printf("%d of %s", d.deckofCards[i].rank, d.deckofCards[i].suite);

    }

      
    for(int i = 13; i<26; i++){

            
        strcpy(d.deckofCards[i].suite, "Hearts");
        d.deckofCards[i].rank = i-13+1;
        //printf("%d of %s", d.deckofCards[i].rank, d.deckofCards[i].suite);

    }

    for(int i =26; i<39; i++){

        
        strcpy(d.deckofCards[i].suite, "Diamonds");
        d.deckofCards[i].rank = i-26+1;
        //printf("%d of %s", d.deckofCards[i].rank, d.deckofCards[i].suite);

    }

    for(int i =39; i<=51; i++){

        
        strcpy(d.deckofCards[i].suite, "Spades");
        d.deckofCards[i].rank = i-39+1;
        //printf("%d of %s", d.deckofCards[i].rank, d.deckofCards[i].suite);

    }
    

}

void printDeck(){

deck d;

for(int i = 0; i<52; i++){
    printf("%d of %s\n", d.deckofCards[i].rank, d.deckofCards[i].suite);
}

}