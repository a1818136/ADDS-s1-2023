# include "Reverser.h"
using namespace std;

int  Reverser::reverseDigit(int value){
    return 1;
}

string Reverser::reverseString(string characters, string result){
    if (characters.length() <= 1){
        return characters + result;
    }
    return reverseString(characters.substr(1),characters.substr(0,1) + result);
}

string Reverser::reverseString(string characters){
    return reverseString(characters, "");
}
