# include "Reverser.h"
# include "Truckloads.h"
# include <iostream>
int main(){
    Reverser a;
    std::cout << a.reverseString("abcde") << std::endl;
    std::cout << a.reverseDigit(12345) << std::endl;
    Truckloads b;
    std::cout << b.numTrucks(15,3) << std::endl;
}
