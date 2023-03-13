#include "Human.h"
using namespace std;

Human::Human(){
    this->name = "Human";
}

Human::Human(string name){
    this->name = name;
}

Move* Human::makeMove(){
    Move* move;
    string moveEntered;
    cout << "Enter move: ";
    cin >> moveEntered;
    if (moveEntered == "Rock"){
        move = new Rock;
    }
    else if (moveEntered == "Paper"){
        move = new Paper;
    }
    else if (moveEntered == "Scissors"){
        move = new Scissors;
    }
    else if (moveEntered == "Monkey"){
        move = new Monkey;
    }
    else if (moveEntered == "Ninja"){
        move = new Ninja;
    }
    else if (moveEntered == "Pirate"){
        move = new Pirate;
    }
    else if (moveEntered == "Robot"){
        move = new Robot;
    }
    else if (moveEntered == "Zombie"){
        move = new Zombie;
    }
    else {
        move = NULL;
    }
    return move;
}

string Human::getName(){
    return this->name;
}
