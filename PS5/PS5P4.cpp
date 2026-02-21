//
//  PS5P4.cpp
//  PS5 code
//
//  Created by Daniel Salgado on 2/20/26.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //define variables
    double salary, tax_rate, tax_amount, tax_percent;
    cout << fixed << showpoint << setprecision(2);
    
    //input
    cout << "Please input your annual salary";
    cin >> salary;
    
    //process
    if (salary > 100000)
    {
        tax_rate = 0.40;
    }
    else if (salary <= 100000 || salary >= 50000)
    {
        tax_rate = 0.35;
    }
    else
        tax_rate = 0.25;
    tax_amount = tax_rate * salary;
    tax_percent = tax_rate * 100;
    
    //output
    cout << "Your listed salary was $" << salary << endl;
    cout << "Your tax rate is " << tax_percent << "%" << endl;
    cout << "Your tax amount came out to $" << tax_amount << endl;
    
    return 0;
    
    
}
