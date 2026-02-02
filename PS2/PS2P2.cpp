//
//  PS2P2.cpp
//  PS2 - Daniel Salgado
//
//  Created by Daniel Salgado on 2/1/26.
//

#include <iostream>
using namespace std;
int main()
{
    //define variables
    float hours, payrate;
    string lastname;
    float grosspay;
    
    //input
    cout << "please enter your last name";
    cin >> lastname;
    cout << "please enter your pay rate";
    cin >> payrate;
    cout << "please enter your hours";
    cin >> hours;
    
    //Process
    grosspay = hours * payrate;
    
    //output
    cout << lastname << " your groass pay is " << grosspay << endl;
    return 0;
}
