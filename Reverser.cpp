# include "Reverser.h"
using namespace std;

int Reverser::reverseDigit(int value, int result){
    if (value == 0){
        return result;
    }
    return reverseDigit(value/10, result*10 + value%10);
}

int Reverser::reverseDigit(int value){
    if (value < 0) return -1;
    return reverseDigit(value, 0);
}


string Reverser::reverseString(string characters, string result){
    if (characters.length() <= 1){
        return characters + result;
    }
    return reverseString(characters.substr(1),characters.substr(0,1) + result);
}

string Reverser::reverseString(string characters){
    if (characters == "") return "ERROR";
    return reverseString(characters, "");
}
