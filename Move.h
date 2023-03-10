# ifndef MOVE_H
# define MOVE_H
# include <iostream>
# include <string>

class Move{
protected: 
    std::string name;

public:
    Move();
    virtual bool ifWinner(Move* Competitor)=0;
};

# endif