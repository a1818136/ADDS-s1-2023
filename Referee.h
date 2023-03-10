# ifndef REFEREE_H
# define REFEREE_H
# include <iostream>
# include <string>
# include "Player.h"
# include "Move.h"
# include "Rock.h"
# include "Paper.h"
# include "Scissors.h"
# include "Monkey.h"
# include "Ninja.h"
# include "Pirate.h"
# include "Robot.h"
# include "Zombie.h"

class Referee{
public:
    Referee();
    Player* refGame(Player* player1, Player* player2);
};

#endif