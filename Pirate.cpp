# include "Pirate.h"
using namespace std;

Pirate::Pirate(){
    this->name = "Pirate";
}

int Pirate::ifWinner(Move* Competitor){
    if (Competitor->getName() == "Monkey" || Competitor->getName() == "Robot"){
        return WIN;
    }
    else if (Competitor->getName() == "Zombie" || Competitor->getName() == "Ninja"){
        return LOSE;
    }
    else {
        return INCOMPATIBLE;
    }
}
