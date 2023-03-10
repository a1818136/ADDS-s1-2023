# ifndef PLAYER_H
# define PLAYER_H
# include <iostream>
# include <string>
# include "Move.h"

class Player{
protected:
    char move;
    std::string name;
public:
    virtual Move* makeMove()=0;
    virtual std::string getName()=0;
};

#endif