//
//  main.cpp
//  PS15
//
//  Created by Daniel Salgado on 5/10/26.
//

#include <iostream>
#include <iomanip>
#include <string>
#include "Header.h"
using namespace std;

int main()
{
    string firstname, lastname;
    float Salary, bonus, long_term_bonus;
    Employee myemployee;
    manager mymanager;
    
    cout << "Please enter employee or manager info, press ctrl+d to stop" << endl;
    
    while (cout << "Please enter your first name" && cin >> firstname)
    {
        cout << "Please enter your lastname: ";
        cin >> lastname;
        cout << "Please enter your Salary: ";
        cin >> Salary;
        
        mymanager.FirstName(firstname);
        mymanager.LastName(lastname);
        mymanager.Salary(Salary);
        
        cout << "Manager Name: " << mymanager.FirstName() << " " << mymanager.LastName() << endl;
        cout << "Manager Salary: " << mymanager.Salary() << endl;
        cout << "Manager Bonus: " << mymanager.bonus() << endl;
        cout << "Please enter the next first name" << endl;
        
    }
    cout << "end";
}
