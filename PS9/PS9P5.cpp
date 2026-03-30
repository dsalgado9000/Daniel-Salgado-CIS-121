//
//  PS9P5.cpp
//  PS9
//
//  Created by Daniel Salgado on 3/30/26.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void call_cost_per (char district_code, double &cost_per)
{
    if (district_code == 'I')
    {
        cost_per = 250;
    }
    else
    {
        cost_per = 500;
    }
}
void call_tuition (double &cost_per, double &credit_hours, double &tuition)
{
    tuition = cost_per * credit_hours;
}

int main()
{
    //define variables
    double cost_per, credit_hours, tuition, sum_tuition;
    string lastname;
    char district_code;
    sum_tuition = 0;
    
    //inputs
    cout << "Please enter your last name, credit hours, and district code";
    cin >> lastname >> credit_hours >> district_code;
    
    while (!cin.eof())   //begin of loop
          //in the loop
    {
        call_cost_per(district_code, cost_per);
        call_tuition(cost_per, credit_hours, tuition);
        sum_tuition = sum_tuition + tuition;
        cout << setprecision(2) << fixed;
        cout << lastname << " Your tuition came out to: $" << tuition << endl;
        
        cout << "Please enter your last name, credit hours, and district code";
        cin >> lastname >> credit_hours >> district_code;
    }//end of loop
    //after the loop
    cout << endl;
    cout << "Total tuition summed together came out to: $" << sum_tuition << endl;
    return 0;
}
