#include <iostream>
#include <string>
#include "Computer.h"
using namespace std;

Computer::Computer(){
    this->Name = "Computer";
    this->Move = 'R';
}

char Computer::makeMove(){
    this->Move = 'R';
}

string Computer::getName(){
    return this->Name;
}