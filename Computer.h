# ifndef COMPUTER_H
# define COMPUTER_H
# include <iostream>
# include <string>
# include "Player.h"
using namespace std;
class Computer:public Player{
public:
    Computer();
    char makeMove();
    string getName();
};

#endif