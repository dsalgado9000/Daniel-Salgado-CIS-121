//
//  main.cpp
//  PS6 Code
//
//  Created by Daniel Salgado on 3/1/26.
//
// PS6P1
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //define variables
    float quantity;
    char status;
    double price,tax,extended,total;
    cout << fixed << showpoint << setprecision(2);
    
    //Input
    cout << "please enter your total quantity";
    cin >> quantity;
    cout << "please enter customer status";
    cin >> status;
    
    // Process
    switch (status)
    {
        case 'A':
            price = 10;
            break;
        case 'B':
            price = 12;
            break;
        case 'C':
            price = 20;
            break;
        case 'D':
            price = 22;
            break;
        default:
            price = 30;
    }
    
    extended = price * quantity;
    tax = extended * 0.07;
    total = tax + extended;
    
   // Output
    
    cout << "Your extended price came out to $" << extended << endl;
    cout << "Your tax amount came out to $" << tax << endl;
    cout << "Your total came out to $" << total << endl;
    
    return 0;
}
