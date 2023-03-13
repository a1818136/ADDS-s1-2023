# include "Referee.h"
# include "Human.h"
# include "Computer.h"
# include "Player.h"
using namespace std;

int main(){
    Player* player1 = new Human;
    Player* player2 = new Computer;
    Referee referee;
    Player* winner = referee.refGame(player1, player2);
    if (winner != NULL){
        cout << winner->getName() << " Wins" << endl;
    }
    else {
        cout << "It's a Tie" << endl;
    }
}
