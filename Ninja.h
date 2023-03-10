# ifndef NINJA_H
# define NINJA_H
# include <iostream>
# include <string>
# include "Move.h"

class Ninja: public Move{
public:
    Ninja();
    int ifWinner(Move* Competitor);
};

# endif
