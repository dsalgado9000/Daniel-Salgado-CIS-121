//
//  PS9P3.cpp
//  PS9
//
//  Created by Daniel Salgado on 3/29/26.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void call_miles_per_gallon (double &miles, double &gallons, double &miles_per_gallon)
{
    miles_per_gallon = miles / gallons;
    
}
void call_gas_cost (double &gallons, double &gas_cost)
{
    gas_cost = gallons * 3.5;
}
int main()
{
    //define variables
    double miles_per_gallon, miles, gallons, gas_cost, sum_total_cost;
    string city;
    int C;
    C = 0;
    sum_total_cost = 0;
    //input
    cout << "Please enter your destination city, miles travelled, and gallons used. ctrl+d to stop";
    cin >> city >> miles >> gallons;
    
    while (!cin.eof())   //begin of loop
          //in the loop
    {
        call_miles_per_gallon (miles, gallons, miles_per_gallon);
        call_gas_cost (gallons, gas_cost);
        sum_total_cost = sum_total_cost + gas_cost;
        cout << setprecision(2) << fixed;
        cout << "Your destination city is: " << city << endl;
        cout << "Your miles per gallon is: " << miles_per_gallon << endl;
        cout << "Your gas cost is: $" << gas_cost << endl;
        
        cout << "Please enter your destination city, miles travelled, and gallons used. ctrl+d to stop";
        cin >> city >> miles >> gallons;
        
    } //end of loop
           //after of loop
    cout << endl;
    cout << "Total gas cost came out to : $" << sum_total_cost << endl;
    return 0;
}
