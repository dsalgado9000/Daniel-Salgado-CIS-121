//
//  PS1P5.cpp
//  PS1
//
//  Created by Daniel Salgado on 2/1/26.
//

#include <iostream>
using namespace std;
int main ()
{
    //define variables
    float number1;
    float number2;
    float sum;
    float difference;
    float product;
    
    //input
    cout << "in order to find the sum, product, and difference of two numbers, please enter the first number";
    cin >> number1;
    cout << "please enter the second number";
    cin >> number2;
    
    //process
    sum = number1 + number2;
    difference = number1 - number2;
    product = number1 * number2;
    
    //output
    cout << "Your sum is " << sum << " Your product is " << product << " Your difference is " << difference << endl;
    return 0;
}
