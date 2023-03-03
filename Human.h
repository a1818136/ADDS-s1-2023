# ifndef HUMAN_H
# define HUMAN_H
# include <iostream>
# include <string>
# include "Player.h"
using namespace std;
class Human: public Player{
public:
    Human();
    Human(string name);
    char makeMove();
    string getName();
};

#endif