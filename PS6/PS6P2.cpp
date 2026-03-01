//
//  PS6P2.cpp
//  PS6 Code
//
//  Created by Daniel Salgado on 3/1/26.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Define variables
    float part;
    float quantity;
    double total,cost;
    cout << fixed << showpoint << setprecision(2);
    
    //Input
    
    cout << "Please enter your part number";
    cin >> part;
    cout << "Please enter your quantity";
    cin >> quantity;
    
    // Process
    
    if ((part = 10) && quantity > 1000)
    {
        cost = 1.00;
    }
    else if ((part = 99) && quantity > 500)
    {
        cost = 2.00;
    }
    else
        cost = 3.00;
    
    total = quantity * cost;
    
    //output
    
    cout << "Part number is " << part << endl;
    cout << "Your cost per unit is $" << cost << endl;
    cout << "Your total came out to $" << total << endl;
    
    return 0;
}
