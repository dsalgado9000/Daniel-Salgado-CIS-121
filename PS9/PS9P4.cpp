//
//  PS9P4.cpp
//  PS9
//
//  Created by Daniel Salgado on 3/29/26.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void call_pay_rate (char job_code, double &pay_rate)
{
    if (job_code == 'L')
    {
        pay_rate = 25;
    }
    else if (job_code == 'A')
    {
        pay_rate = 30;
    }
    else
    {
        pay_rate = 50;
    }
}
    void call_gross_pay (double &pay_rate, double &hours, double &overtime, double &pay, double &gross_pay)
    {
        if (hours > 40)
        {
            overtime = (pay_rate * 1.5) * (hours - 40);
            pay = hours * pay_rate;
            gross_pay = pay + overtime;
        }
        else
        {
            overtime = 0;
            pay = hours * pay_rate;
            gross_pay = pay + overtime;
        }
    }
        
    int main ()
    {
        //define variables
        double pay_rate, hours, overtime, pay, gross_pay, sum_gross_pay;
        string lastname;
        char job_code;
        sum_gross_pay = 0;
        gross_pay = 0;
        
        //input
        cout << "Please enter your last name, job code, and hours worked. ctrl+d to stop";
        cin >> lastname >> job_code >> hours;
        
        while (!cin.eof())   //begin of loop
              //in the loop
        {
            call_pay_rate(job_code, pay_rate);
            call_gross_pay (pay_rate,hours,overtime,pay,gross_pay);
            sum_gross_pay = sum_gross_pay + gross_pay;
            cout << setprecision(2) << fixed;
            cout << lastname << " your gross pay is: $" << gross_pay << endl;
            
            cout << "Please enter your last name, job code, and hours worked. ctrl+d to stop";
            cin >> lastname >> job_code >> hours;

        } //end of loop
        //after the loop
        cout << endl;
        cout << "Total gross pay of all entries came out to: $" << sum_gross_pay << endl;
        return 0;
    
}
