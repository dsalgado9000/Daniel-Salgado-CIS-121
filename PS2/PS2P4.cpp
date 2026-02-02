//
//  PS2P4.cpp
//  PS2 - Daniel Salgado
//
//  Created by Daniel Salgado on 2/1/26.
//

#include <iostream>
using namespace std;
int main()
{
    //Defining variables 
    float credits;
    string lastname;
    float tuition;
    
    //input
    cout << "Please enter Your last name";
    cin >> lastname;
    cout << "Please enter your amount of credits";
    cin >> credits;

    //process
    tuition = (credits * 250) + 100;
    
    //process
    cout << lastname << " your tuition is " << tuition << endl;
    return 0;
    
}
