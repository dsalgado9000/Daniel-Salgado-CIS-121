////
////  PS5P1.cpp
////  PS1P1
////
////  Created by Daniel Salgado on 1/25/26.
////

#include <iostream>
using namespace std;
int main(){
    double number1, number2;
    std:: cout << "please enter two numbers to find the sum, product, and diffence";
    std:: cin >> number1 >> number2;
    double sum = number1 + number2;
    double product = number1 * number2;
    double difference = number1 - number2;
    std:: cout << "Your sum is " << sum << " Your product is " << product << " Your difference is " << difference << std::endl;
    return 0;
    
}
