//
//  PS6P3.cpp
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
    
    float tickets;
    char location;
    double total,price_per;
    cout << fixed << showpoint << setprecision(2);
    //input
    
    cout << "Please enter your total number of tickets";
    cin >> tickets;
    cout << "Please enter your location code";
    cin >> location;
    
    //Process
    
    if ((location == 'H') || (tickets >= 25))
    {
        price_per = 30;
    }
    else if ((location == 'L') || (tickets <= 24 && tickets >= 10))
    {
        price_per = 40;
    }
    else
        price_per = 50;
    
    total = tickets * price_per;
    
    //output
    cout << "Your total tickets was stated as " << tickets << endl;
    cout << "Your price per ticket came out to $" << price_per << endl;
    cout << "Your total came out to $" << total << endl;
    
    return 0;
}
