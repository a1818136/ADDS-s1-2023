# ifndef PLAYER_H
# define PLAYER_H
# include <iostream>
# include <string>

class Player{
protected:
    char Move;
    std::string Name;
public:
    virtual char makeMove()=0;
    virtual std::string getName()=0;
};

#endif