# ifndef ROBOT_H
# define ROBOT_H
# include <iostream>
# include <string>
# include "Move.h"

class Robot: public Move{
public:
    Robot();
    int ifWinner(Move* Competitor);
};

# endif
