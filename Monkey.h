# ifndef MONKEY_H
# define MONKEY_H
# include <iostream>
# include <string>
# include "Move.h"

class Monkey: public Move{
public:
    Monkey();
    int ifWinner(Move* Competitor);
};

# endif