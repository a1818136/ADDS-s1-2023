# ifndef COMPUTER_H
# define COMPUTER_H
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

class Computer: public Player{
public:
    Computer();
    Move* makeMove();
    std::string getName();
};

#endif
