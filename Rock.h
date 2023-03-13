# ifndef ROCK_H
# define ROCK_H
# include <string>
# include "Move.h"

class Rock: public Move{
public:
    Rock();
    int ifWinner(Move* Competitor);
};

# endif
