# ifndef ROCK_H
# define ROCK_H
# include <iostream>
# include <string>
# include "Move.h"

class Rock: public Move{
public:
    Rock();
    bool ifWinner(Move* Competitor);
};

# endif
