# include "Truckloads.h"

int Truckloads::numberTrucks(int numCrates, int loadSize, int numPiles){
    int cratesPerTruck = numCrates/numPiles;
    int cratesRemain = numCrates%numPiles;
    int newNumPiles;
    if (cratesPerTruck <= loadSize && loadSize*numPiles >= numCrates){
        return numPiles;
    }

    if (cratesPerTruck > loadSize || cratesRemain == 0){
        newNumPiles = numPiles*2;
    }
    else {
        newNumPiles = numPiles + cratesRemain;
    }
    
    return numberTrucks(numCrates, loadSize, newNumPiles);
}

int Truckloads::numberTrucks(int numCrates, int loadSize){
    return numberTrucks(numCrates, loadSize, 1);
}
