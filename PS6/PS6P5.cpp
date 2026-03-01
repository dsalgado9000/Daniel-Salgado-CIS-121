//
//  PS6P5.cpp
//  PS6 Code
//
//  Created by Daniel Salgado on 3/1/26.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Define Variables
    char job;
    float hours;
    double rate,gross_pay;
    cout << fixed << showpoint << setprecision(2);
    
    //input
    cout << "Please enter your Job code (L,J,A)";
    cin >> job;
    cout << "Please enter your total hours";
    cin >> hours;
    
    //process
    if ((job == 'L') & (hours > 40))
    {
        rate = 50;
    }
    else if ((job == 'L') & (hours <= 40))
    {
        rate = 40;
    }
    else if ((job == 'J') & (hours > 60))
    {
        rate = 100;
    }
    else if ((job == 'J') & (hours <=60))
    {
        rate = 75;
    }
    else if ((job == 'A') & (hours > 40))
    {
        rate = 25;
    }
    else if ((job == 'A') & (hours <=40))
    {
        rate = 20;
    }
    else
        rate = 0;
       
    
    gross_pay = rate * hours;
    
    //output
    cout << "Your gross pay is $" << gross_pay << endl;
    return 0;
    

}
