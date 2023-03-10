# include <iostream>
# include <string>
# include "Ninja.h"
using namespace std;

Ninja::Ninja(){
    this->name = "Ninja";
}

int Ninja::ifWinner(Move* Competitor){
    if (Competitor->getName() == "Zombie" || Competitor->getName() == "Pirate"){
        return WIN;
    }
    else if (Competitor->getName() == "Robot" || Competitor->getName() == "Monkey"){
        return LOSE;
    }
    else {
        return INCOMPATIBLE;
    }
}
