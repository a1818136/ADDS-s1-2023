# ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <string>
# include "Move.h"

class Zombie: public Move{
public:
    Zombie();
    int ifWinner(Move* Competitor);
};

# endif