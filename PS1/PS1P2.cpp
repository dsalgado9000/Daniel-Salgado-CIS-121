//
//  PS1P2.cpp
//  PS1
//
//  Created by Daniel Salgado on 2/1/26.
//

#include <iostream>
using namespace std;
int main()
{
    //define var
    float number1;
    float number2;
    float sum;
    
    //input
    cout << "Please enter one real number";
    cin >> number1;
    cout << "Please enter another real number";
    cin >> number2;
    
    //process
    sum = number1 + number2;
    
    //output
    cout << "Your sum for these two numbers is " << sum << endl;
    return 0;
    
}
