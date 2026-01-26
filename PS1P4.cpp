//////
//////  PS4P1.cpp
//////  PS1P1
//////
//////  Created by Daniel Salgado on 1/25/26.
//////
////
#include <iostream>
using namespace std;
int main()
{
    double number1, number2, number3;
    std::cout << "please enter 3 numbers to complete (n1 + n2) * n3. First number will be n1, second number will be 2, etc";
    std::cin >> number1 >> number2 >> number3;
    double product = (number1 + number2) * number3;
    std:: cout << " Your result is " << product << std::endl;
    return 0;
    
    }
