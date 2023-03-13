# include "Rock.h"
using namespace std;

Rock::Rock(){
    this->name = "Rock";
}

int Rock::ifWinner(Move* Competitor){
    if (Competitor->getName() == "Scissors"){
        return WIN;
    }
    else if (Competitor->getName() == "Paper"){
        return LOSE;
    }
    else {
        return INCOMPATIBLE;
    }
}
