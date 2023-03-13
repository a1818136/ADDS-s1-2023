#include "Referee.h"
using namespace std;

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2){
    Move* player1_move = player1->makeMove();
    Move* player2_move = player2->makeMove();

    if (player1_move->ifWinner(player2_move) == WIN){
        return player1;
    }
    else if (player1_move->ifWinner(player2_move) == LOSE){
        return player2;
    }
    else {
        return NULL;
    }   
}
