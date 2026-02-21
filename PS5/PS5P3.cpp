//
//  PS5P3.cpp
//  PS5 code
//
//  Created by Daniel Salgado on 2/20/26.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    //define variables
    char job_code;
    string lastname;
    double pay_rate, hrs, total;
    
    cout << fixed << showpoint << setprecision(2);
    
    //input
    cout << "please enter your last name";
    cin >> lastname;
    cout << "please enter your Hours worked";
    cin >> hrs;
    cout << "Please enter your job code";
    cin >> job_code;
    
    //process
    if (job_code == 'E')
    {
        pay_rate = 25;
    }
    else if (job_code == 'j')
    {
        pay_rate = 20;
    }
    else if (job_code == 'A')
    {
        pay_rate = 15;
    }
    else
        return job_code;

    total = pay_rate * hrs;
    
    //output
    
    cout << lastname << endl;
    cout << "hours worked: " << hrs << endl;
    cout << "pay rate = $" << pay_rate << endl;
    cout << "total came out to $" << total << endl;
    return 0;
}
