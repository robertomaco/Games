#include <iostream>
#include "chess.hpp"

using namespace std;

int main(){

games game;

game.initializeBoard();
cout << game.board.piece.bishop << endl;

}