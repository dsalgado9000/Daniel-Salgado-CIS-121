//
//  PS4P6.cpp
//  PS4 code
//
//  Created by Daniel Salgado on 2/15/26.
//

#include <iostream>
using namespace std;
int main()
{
    //define variables
    string lastname;
    float gpa;
    
    //input
    cout << "Please enter your last name";
    cin >> lastname;
    cout << "please enter your gpa";
    cin >> gpa;
    
    //process
    if (gpa >= 4.00)
    {
        cout << "well done getting a ";
    }
    else
    {
        cout << "good effort getting a ";
    
    }
    
    //output
    
    cout << gpa << endl;
    return 0;

}
