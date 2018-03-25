#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


//This is the card struct
typedef struct card{

    char suite[10];
    int rank;
    int dealt;

}card;

//this is the deck struct
typedef struct deck{

    card deckofCards[52];

}deck;
//this is the hand struct
typedef struct hand{

    card hawn[1];

}hand;

//-----------------------------------------------------DECK STUFF
//generates a 52 standard deck
void generateDeck(deck* d){

    for(int i = 0; i<52; i++){
        d->deckofCards[i].dealt = 0;
    }

    for(int i = 0; i<13; i++){

        
        strcpy(d->deckofCards[i].suite, "Clubs");
        d->deckofCards[i].rank = i+1;

    }

      
    for(int i = 13; i<26; i++){

            
        strcpy(d->deckofCards[i].suite, "Hearts");
        d->deckofCards[i].rank = i-13+1;

    }

    for(int i =26; i<39; i++){

        
        strcpy(d->deckofCards[i].suite, "Diamonds");
        d->deckofCards[i].rank = i-26+1;

    }

    for(int i =39; i<=51; i++){

        
        strcpy(d->deckofCards[i].suite, "Spades");
        d->deckofCards[i].rank = i-39+1;

    }
    

}
//prints out the deck, Debugging purposes
void printDeck(deck* d){

for(int i = 0; i<52; i++){
    printf("%d of %s: Dealt: %d\n", d->deckofCards[i].rank, d->deckofCards[i].suite, d->deckofCards[i].dealt);
}
printf("\n");

}

//END OF DECK STUFF---------------------------------------------------

//HAWN STUFF----------------------------------------------------------

//resets the hand
hand resetHand(hand* h){

    for(int i = 0; i<2;i++){
        strcpy(h->hawn[i].suite, " ");
        h->hawn[i].rank = 0;
    }

}
//prints the current hand
hand printHand(hand* h){
for(int i = 0; i<=1; i++){
    printf("%d of %s\n", h->hawn[i].rank, h->hawn[i].suite);
}

}
//This deals 2 random cards to the hand
void dealHand(hand* h, deck* d){

for(int i = 1; i <=2 ; i++){
    srand(time(NULL) * i);
    int randomNumber;
    randomNumber = rand() % 52;

    h->hawn[i-1].rank = d->deckofCards[randomNumber].rank;
    strcpy(h->hawn[i-1].suite, d->deckofCards[randomNumber].suite);
} 
    
}

void compareHands(hand* p, hand* d){

    // for(int i = 1; i <= 2; i++)
    if(p->hawn[0].rank + p->hawn[1].rank > d->hawn[0].rank + d->hawn[1].rank){
        printf("The player won");
    }
    else if(p->hawn[0].rank + p->hawn[1].rank < d->hawn[0].rank + d->hawn[1].rank){
        printf("The dealer won");
    }
    else if(p->hawn[0].rank + p->hawn[1].rank == d->hawn[0].rank + d->hawn[1].rank){
        printf("Draw");
    }
    else printf("Fuck knows mate.");
}

void game(hand* de, hand* p, deck* d){
generateDeck(d);

dealHand(de, d);
dealHand(p, d);
printf("Your hand: ");
printHand(p);
printf("Dealer hand: ");
printHand(de);
printf("\n");
compareHands(p, de);

}

//END OF HAWN STUFF----------------------------------------------------