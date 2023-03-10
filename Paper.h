# ifndef PAPER_H
# define PAPER_H
# include <iostream>
# include <string>
# include "Move.h"

class Paper: public Move{
public:
    Paper();
    int ifWinner(Move* Competitor);
};

# endif
