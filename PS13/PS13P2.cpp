//
//  PS13P2.cpp
//  PS13
//
//  Created by Daniel Salgado on 4/26/26.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
struct Employee
{
    string firstname;
    string lastname;
    float hours;
    float pay_rate;
    float gross_pay;
    float overtime;
};
void compute_pay(double &pay_rate, double &hours, double &overtime, double &pay, double &gross_pay)
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
int main()
{
    string firstname, lastname;
    double hours, pay_rate, gross_pay, overtime, pay;
    int n;
    
    cout << "Please enter the number of employees being inserted";
    cin >> n;
    
    vector <Employee> Employees(n);
    
    
    for (int i = 0; i < n; ++i)
    {
        cout << "Employee:" << i + 1 << ": " << endl;
        cout << "Please enter the Employee's first name , ctrl +d";
        cin >> Employees[i].firstname;
        cout << "Please enter the last name";
        cin >> Employees[i].lastname;
        cout << "Please enter hours";
        cin >> hours;
        cout << "Please enter your rate";
        cin >> pay_rate;
        
        compute_pay(pay_rate, hours, overtime, pay, gross_pay);
        Employees[i].hours = hours;
           Employees[i].pay_rate = pay_rate;
           Employees[i].gross_pay = gross_pay;
        
    }
    cout << "n" << left << setw(15) << "First Name"
            << setw(15) << "Last Name"
            << setw(10) << "Hours"
            << setw(10) << "Rate"
            << "Gross Pay" << endl;

       for (const auto& emp : Employees) {
           cout << left << setw(15) << emp.firstname
                << setw(15) << emp.lastname
                << setw(10) << emp.hours
                << setw(10) << emp.pay_rate
                << "$" << fixed << setprecision(2) << emp.gross_pay << endl;
       }

       return 0;
}
