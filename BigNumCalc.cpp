#include "BigNumCalc.h"
using namespace std;

std::list<int> BigNumCalc::buildBigNum(std::string numString){
    list<int> myList;
    int len = numString.size();
    string num;
    while(len != 0){
        num = numString.substr(0,1);
        numString.erase(0,1);
        myList.push_back(stoi(num));
        len = numString.size();
    }
    return myList;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> myList;
    int number;
    bool add1 = false;
    while (num1.size() != 0 || num2.size() != 0) {
        if (num1.size() == 0 && num2.size() != 0) {
            number = num2.back();
            num2.pop_back();
            if (add1 == true) {
                number += 1;
                add1 = false;
            }
            if (number >= 10) {
                add1 = true;
                number -= 10;
            }
            myList.push_front(number);
        }
        else if (num1.size() != 0 && num2.size() == 0) {
            number = num1.back();
            num1.pop_back();
            if (add1 == true) {
                number += 1;
                add1 = false;
            }
            if (number >= 10) {
                add1 = true;
                number -= 10;
            }
            myList.push_front(number);
        }
        else {
            number = num1.back() + num2.back();
            num1.pop_back();
            num2.pop_back();
            if (add1 == true) {
                number += 1;
                add1 = false;
            }
            if (number >= 10) {
                add1 = true;
                number -= 10;
            }
            myList.push_front(number);
        }
    }
    if (add1 == true) {
        myList.push_front(1);
    }
    while (myList.front() == 0 && myList.size() > 1) {
        myList.pop_front();
    }
    return myList;
}

      
std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2){
    std::list<int> myList;
    int b = 0;
    while (!num1.empty() || !num2.empty()) {
        int diff = b;
        if (!num1.empty()) {
            diff += num1.back();
            num1.pop_back();
        }
        if (!num2.empty()) {
            diff -= num2.back();
            num2.pop_back();
        }
        if (diff < 0) {
            b = -1;
            diff += 10;
        } 
        else {
            b = 0;
        }
            myList.push_front(diff);
        }

        while (myList.size() > 1 && myList.front() == 0) {
            myList.pop_front();
        }
        return myList;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2){
   list<int> myList;
    int m = 0;
    for (int i = num1.size()-1; i >= 0; i--) {
        int digitProd = num1.front()*num2.front() + m;
        myList.push_front(digitProd % 10);
        m = digitProd / 10;
        num1.pop_front();
    }
    if (m > 0) {
        myList.push_front(m);
    }
    return myList;
}

BigNumCalc::BigNumCalc(){}
BigNumCalc::~BigNumCalc(){}