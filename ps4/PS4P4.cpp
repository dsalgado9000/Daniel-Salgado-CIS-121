//
//  PS4P4.cpp
//  PS4 code
//
//  Created by Daniel Salgado on 2/15/26.
//

#include <iostream>
using namespace std;
int main()
{
    //Define variables
    string name_of_appliance;
    float appliance_cost;
    float warrante_percent;
    float warrante_total;
    float total;
    
    //input
    cout << "please enter the name of the appliance";
    cin >> name_of_appliance;
    cout << "please enter the cost of the appliance";
    cin >> appliance_cost;
    
    //process
    if (appliance_cost <= 1000)
    {
        warrante_percent = 0.05;
    }
    else
    {
        warrante_percent = 0.10;
    }
    
    warrante_total = appliance_cost * warrante_percent;
    total = appliance_cost + warrante_total;
    
    //output
    cout << "Your appliance " << name_of_appliance << " has a cost of $" << appliance_cost << endl;
    cout << "Your warrante came out to $" << warrante_total << endl;
    cout << "Your overall total for the appliance came out to $" << total << endl;
    
    return 0;
 }
