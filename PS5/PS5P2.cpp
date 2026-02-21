//
//  PS5P2.cpp
//  PS5 code
//
//  Created by Daniel Salgado on 2/20/26.
//PS5P1

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    //define variables
    double lbs, price_per, total;
    cout << fixed << showpoint << setprecision(2);
    
    //input
    cout << "please enter your quantity in pounds";
    cin >> lbs;
    
    //process
    
    if (lbs > 100)
    {
        price_per = 0.10;
    }
    else if (lbs <= 100 || lbs >= 50)
    {
        price_per = 0.25;
    }
    else
        price_per = 0.50;
        
    
        total = price_per * lbs;
    
    //output
    cout << "Your price per pound came out to $" << price_per << " and your total came out to " << total << endl;
    return 0;
    
}
