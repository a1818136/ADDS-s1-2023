#include <iostream>
#include <string>
#include "Computer.h"
using namespace std;

Computer::Computer(){
    this->name = "Computer";
}

Move* Computer::makeMove(){
    Move* move = new Rock;
    return move;
}

string Computer::getName(){
    return this->name;
}