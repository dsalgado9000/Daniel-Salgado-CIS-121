//
//  main.cpp
//  PS14
//
//  Created by Daniel Salgado on 5/3/26.
//

#include <iostream>
#include <iomanip>
#include <string>
#include "Header.h"
using namespace std;

int main()
{
    string firstname, lastname, type;
    membership mymembership;
    float age;
  
    cout << "Please enter your membership info, press ctrl+d to stop" << endl;
    
    while (cout << "Please enter your first name: " && cin >> firstname)
    {
        cout << "Please enter your last name: ";
        cin >> lastname;
        cout << "Please enter your age: ";
        cin >> age;
        cout << "Please enter your Membership type";
        cin >> type;
        
        mymembership.membership_lastname(lastname);
        mymembership.membership_firstname(firstname);
        mymembership.Age(age);
        mymembership.Type(type);
        
        cout << "Member Name: " << mymembership.membership_firstname() << " " << mymembership.membership_lastname() << endl;
        cout << fixed << setprecision(2);
        cout << "Cost: " << mymembership.cost() << endl;
        cout << "Please enter next first name or ctrl+d to stop";
    }
    cout << "end";
    return 0;
}
