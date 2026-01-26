////
////  PS2P1.cpp
////  PS1P1
////
////  Created by Daniel Salgado on 1/25/26.
////
//
#include <iostream>
using namespace std;

int main(){
    double number1, number2;
    
    std:: cout << "enter two numbers for the sum";
    std:: cin >> number1 >> number2;
    double sum = number1 + number2;
    
    std:: cout << "The sum of these two numbers is " << sum << std::endl;
    return 0;
}
