# include "Robot.h"
using namespace std;

Robot::Robot(){
    this->name = "Robot";
}

int Robot::ifWinner(Move* Competitor){
    if (Competitor->getName() == "Zombie" || Competitor->getName() == "Ninja"){
        return WIN;
    }
    else if (Competitor->getName() == "Monkey" || Competitor->getName() == "Pirate"){
        return LOSE;
    }
    else {
        return INCOMPATIBLE;
    }
}
