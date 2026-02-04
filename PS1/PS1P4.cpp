//
//  PS1P4.cpp
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
    float number3;
    float product;
    
    //input
    cout << "To solve (n1 + n2) * n3, please insert n1";
    cin >> number1;
    cout << "please insert n2";
    cin >> number2;
    cout << "please insert n3";
    cin >> number3;
    
    //process
    product = (number1 + number2) * number3;
    
    cout << "Your answer is " << product << endl;
    return 0;
    
}
