# include "Scissors.h"
using namespace std;

Scissors::Scissors(){
    this->name = "Scissors";
}

int Scissors::ifWinner(Move* Competitor){
    if (Competitor->getName() == "Paper"){
        return WIN;
    }
    else if (Competitor->getName() == "Rock"){
        return LOSE;
    }
    else {
        return INCOMPATIBLE;
    }
}
