# ifndef HUMAN_H
# define HUMAN_H
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


class Human: public Player{
public:
    Human();
    Human(std::string name);
    Move* makeMove();
    std::string getName();
};

#endif
