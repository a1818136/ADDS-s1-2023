# ifndef PIRATE_H
# define PIRATE_H
# include <string>
# include "Move.h"

class Pirate: public Move{
public:
    Pirate();
    int ifWinner(Move* Competitor);
};

# endif
