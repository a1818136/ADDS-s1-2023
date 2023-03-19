# include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize, int numPiles){
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
    
    return numTrucks(numCrates, loadSize, newNumPiles);
}

int Truckloads::numTrucks(int numCrates, int loadSize){
    return numTrucks(numCrates, loadSize, 1);
}
