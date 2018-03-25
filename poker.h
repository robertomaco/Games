#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct card{

    char suite[10];
    int rank;
    int dealt;

}card;

typedef struct deck{

    card deckofCards[52];

}deck;

typedef struct hand{

    card hawn[1];

}hand;

//-----------------------------------------------------DECK STUFF

void generateDeck(deck* d){

    for(int i = 0; i<52; i++){
        d->deckofCards[i].dealt = 0;
    }

    for(int i = 0; i<13; i++){

        
        strcpy(d->deckofCards[i].suite, "Clubs");
        d->deckofCards[i].rank = i+1;
        //printf("%d of %s", d.deckofCards[i].rank, d.deckofCards[i].suite);

    }

      
    for(int i = 13; i<26; i++){

            
        strcpy(d->deckofCards[i].suite, "Hearts");
        d->deckofCards[i].rank = i-13+1;
        //printf("%d of %s", d.deckofCards[i].rank, d.deckofCards[i].suite);

    }

    for(int i =26; i<39; i++){

        
        strcpy(d->deckofCards[i].suite, "Diamonds");
        d->deckofCards[i].rank = i-26+1;
        //printf("%d of %s", d.deckofCards[i].rank, d.deckofCards[i].suite);

    }

    for(int i =39; i<=51; i++){

        
        strcpy(d->deckofCards[i].suite, "Spades");
        d->deckofCards[i].rank = i-39+1;
        //printf("%d of %s", d.deckofCards[i].rank, d.deckofCards[i].suite);

    }
    

}

void printDeck(deck* d){

for(int i = 0; i<52; i++){
    printf("%d of %s: Dealt: %d\n", d->deckofCards[i].rank, d->deckofCards[i].suite, d->deckofCards[i].dealt);
}
printf("\n");

}

//END OF DECK STUFF---------------------------------------------------

//HAWN STUFF----------------------------------------------------------


void resetHand(hand* h){

    for(int i = 0; i<2;i++){
        strcpy(h->hawn[i].suite, " ");
        h->hawn[i].rank = 0;
        //printf("%d of %s\n", h.hawn[i].rank, h.hawn[i].suite);
    }

   // return h;
}

void printHand(hand* h){
for(int i = 0; i<2; i++){
    printf("%d of %s\n", h->hawn[i].rank, h->hawn[i].suite);
}

//return h;
}

void dealHand(hand* h, deck* d){

for(int i = 0; i < 2; i++){
    srand(time(NULL) * i);
    int randomNumber;
    randomNumber = rand() % 52;
    //printf("%d, %d of %s\n", randomNumber, d->deckofCards[2].rank, d->deckofCards[2].suite);

    h->hawn[i].rank = d->deckofCards[1].rank;
    strcpy(h->hawn[i].suite, d->deckofCards[1].suite);
}
    //return h;
    
}

//END OF HAWN STUFF----------------------------------------------------