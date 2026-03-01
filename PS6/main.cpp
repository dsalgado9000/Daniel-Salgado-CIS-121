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
    int quantity;
    char status;
    double price,tax,extended,total;
    
    //Input
    cout << "please enter your total quantity" << endl;
    cin >> quantity;
    cout << "please enter customer status" << endl;
    cin >> status;
    
    // Process
        if ((status == 'A') & (quantity > 10000))
        {
            price = 10;
        }
    else if ((status == 'B') & (quantity > 10000))
    {
        price = 12;
    }
    else if ((status == 'C') & (quantity >= 5000 && quantity <= 10000))
    {
        price = 20;
    }
    else if ((status == 'D') & (quantity >= 5000 && quantity <= 10000))
    {
        price = 22;
    }
    else if (quantity < 5000)
    {
        price = 30;
    }
    else
        price = 0;
    cout << "invalid input" << endl;
    
    
            extended = price * quantity;
            tax = extended * 0.07;
            total = tax + extended;
            
            // Output
            
            cout << "Your extended price came out to $" << extended << endl;
            cout << "Your tax amount came out to $" << tax << endl;
            cout << "Your total came out to $" << total << endl;
            
            return 0;
            
}
