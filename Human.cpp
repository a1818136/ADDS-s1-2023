#include <iostream>
#include <string>
#include "Human.h"
using namespace std;

Human::Human(){
    this->Name = "Human";
}

Human::Human(string name){
    this->Name = name;
}

char Human::makeMove(){
    char move;
    cout << "Enter move: ";
    cin >> move;
    return move;
}

string Human::getName(){
    return this->Name;
}