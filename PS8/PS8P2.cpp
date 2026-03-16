//
//  PS8P2.cpp
//  PS8
//
//  Created by Daniel Salgado on 3/15/26.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//function
float compute_pay(char job_code, float hours, float pay_rate)
{
    float pay;
    if (job_code == 'L')
    {
        pay_rate = 25;
        pay = hours * pay_rate;
    }
    else if (job_code == 'A')
    {
        pay_rate = 30;
        pay = hours * pay_rate;
    }
    else
    {
        pay_rate = 50;
        pay = pay_rate * hours;
    }
    return pay;
}
int main()
{
    //define variables
    float pay, hours, pay_rate, overtime, total_pay, average_pay, total_pay_sum;
    char job_code;
    int C;
    string lastname;
    C = 0;
    average_pay = 0;
    total_pay_sum = 0;
    pay_rate = 0;
    
    //input
    cout << "Please enter your Last name, job code, and hours, Ctrl+d to stop";
    cin >> lastname >> job_code >> hours;
    
    //process
    while (!cin.eof()) //begin of loop
    {
        pay = compute_pay(job_code, hours, pay_rate);
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
              cout << "Job Code: " << job_code << endl;
              cout << "Hours worked: " << hours << endl;
              cout << "Total Pay: $" << total_pay << endl;
              
              cout << "Please enter your Last name, job code, and hours, Ctrl+d to stop";
              cin >> lastname >> job_code >> hours;
          } //end of loop
          //after the loop
    cout << endl;
        cout << "total entries: " << C << endl;
        cout << "Average pay: " << average_pay << endl;
        return 0;
    }

