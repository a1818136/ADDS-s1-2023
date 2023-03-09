# ifndef PLAYER_H
# define PLAYER_H
# include <iostream>
# include <string>
using namespace std;
class Player{
public:
    char Move;
    string Name;
    virtual char makeMove()=0;
    virtual string getName()=0;
};

#endif