# include <iostream>
# include <string>
# include "Paper.h"
using namespace std;

Paper::Paper(){
    this->name = "Paper";
}

int Paper::ifWinner(Move* Competitor){
    if (Competitor->getName() == "Rock"){
        return WIN;
    }
    else if (Competitor->getName() == "Scissors"){
        return LOSE;
    }
    else {
        return INCOMPATIBLE;
    }
}
