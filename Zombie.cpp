# include "Zombie.h"
using namespace std;

Zombie::Zombie(){
    this->name = "Zombie";
}

int Zombie::ifWinner(Move* Competitor){
    if (Competitor->getName() == "Monkey" || Competitor->getName() == "Pirate"){
        return WIN;
    }
    else if (Competitor->getName() == "Ninja" || Competitor->getName() == "Robot"){
        return LOSE;
    }
    else {
        return INCOMPATIBLE;
    }
}
