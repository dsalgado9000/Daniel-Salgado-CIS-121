//
//  PS7P4.cpp
//  PS7
//
//  Created by Daniel Salgado on 3/8/26.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //define variables
    string lastname;
    float hours, pay, overtime, total_pay, average_pay, pay_rate;
    char code;
    int C;
    C = 0;
    average_pay = 0;
    
    //input
    cout << "Please enter your Last name, job code, and hours, Ctrl+d to stop";
    cin >> lastname >> code >> hours;
    
    //process
    while (!cin.eof()) //begin of loop
        //in the loop
    {
        if (code == 'L')
        {
            pay_rate = 25;
            pay = hours * pay_rate;
        }
        else if (code == 'A')
        {
            pay_rate = 30;
            pay = hours * pay_rate;
        }
        else
        {
            pay_rate = 50;
            pay = hours * pay_rate;
        }
        if (hours > 40)
        {
            overtime = (hours - 40) * (pay_rate * 1.5);
        }
        else
            overtime = 0;
        
        total_pay = pay + overtime;
        C = C + 1;
        average_pay = total_pay / C;
        cout << setprecision(2) << fixed;
        cout << "Employee: " << lastname << endl;
        cout << "Job Code: " << code << endl;
        cout << "Hours worked: " << hours << endl;
        cout << "Total Pay: $" << total_pay << endl;
        
        cout << "Please enter your Last name, job code, and hours, Ctrl+d to stop";
        cin >> lastname >> code >> hours;
    } //end of loop
    //after the loop
    cout << endl;
    cout << "total entries: " << C << endl;
    cout << "Average pay: " << average_pay << endl;
    return 0;
    
}
