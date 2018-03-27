#include <iostream>

typedef struct card{

    int rank;
    char suite[10];
    int dealt;

}card;

typedef struct deck{

    card deckOfCards[51];

}deck;

typedef struct hand{

    card hawn[1];

}hand;

