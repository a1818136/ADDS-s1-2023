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
    cout << "Enter move: ";
    cin >> this->Move;
}

string Human::getName(){
    return this->Name;
}