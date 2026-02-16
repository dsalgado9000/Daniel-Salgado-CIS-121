//
//  PS4P5.cpp
//  PS4 code
//
//  Created by Daniel Salgado on 2/15/26.
//

#include <iostream>
using namespace std;
int main ()
{
    //define variables
    string lastname;
    float dependents;
    float grossincome;
    float adjusted;
    float taxrate;
    float incometax;
    
    //input
    cout << "please enter in your last name";
    cin >> lastname;
    cout << "Please enter the number of dependents you have";
    cin >> dependents;
    cout << "Please enter your gross income";
    cin >> grossincome;
    
    //process
    
    adjusted = grossincome - (dependents * 12000);
    
    if (adjusted <= 50000)
    {
        taxrate = 0.10;
    }
    else
    {
        taxrate = 0.20;
    }
    
    incometax = taxrate * adjusted;
    
    if (incometax < 0)
    {
        incometax = 100;
    }
    
    //output
    cout << "Ok Mr/Ms " << lastname << ", You stated your gross income is " << grossincome << " and you have " << dependents << " dependents." << endl;
    cout << "Your adjusted gross income is " << adjusted << endl;
    cout << "Your income tax came out to " << incometax << endl;
    
    return 0;
    
}
