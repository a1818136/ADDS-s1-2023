# include <iostream>
# include <string>
# include "Monkey.h"
using namespace std;

Monkey::Monkey(){
    this->name = "Monkey";
}

int Monkey::ifWinner(Move* Competitor){
    if (Competitor->getName() == "Robot" || Competitor->getName() == "Ninja"){
        return WIN;
    }
    else if (Competitor->getName() == "Zombie" || Competitor->getName() == "Pirate"){
        return LOSE;
    }
    else {
        return INCOMPATIBLE;
    }
}
