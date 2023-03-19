# ifndef REVERSER_H
# define REVERSER_H
# include <string>

class Reverser{
private: 
    int reverseDigit(int value, int result);
    std::string reverseString(std::string characters, std::string result);
public:
    int reverseDigit(int value);
    std::string reverseString(std::string characters);
};

# endif
