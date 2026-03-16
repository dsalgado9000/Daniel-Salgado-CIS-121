//
//  main.cpp
//  PS8
//
//  Created by Daniel Salgado on 3/15/26.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//function
float compute_miles_per_gallon(float miles, float gallons)
{
    float miles_per_gallon;
    miles_per_gallon = miles / gallons;
    return miles_per_gallon;
}

int main()
{
    //define variables
    float miles, gallons, miles_per_gallon;
    string destination_city;
    float total_miles;
    int C;
    total_miles = 0;
    C = 0;
    
    //input
    cout << "Please enter your destination city, miles travelled, and gallons used. ctrl+d to stop";
    cin >> destination_city >> miles >> gallons;
    
    while (!cin.eof())   //begin of loop
        //in the loop
    {
        miles_per_gallon = compute_miles_per_gallon(miles, gallons);
        total_miles = total_miles + miles;
        C = C + 1;
        
        cout << setprecision(2) << fixed;
        cout << "Your destination city is: " << destination_city << endl;
        cout << "Your miles per gallon is: " << miles_per_gallon << endl;
        
        cout << "Please enter your destination city, miles travelled, and gallons used. ctrl+d to stop";
        cin >> destination_city >> miles >> gallons;
    } //end of loop
    //after of loop
    
    cout << endl;
    cout << "Total trips came out to " << C << endl;
    cout << "Total miles summed came out to " << total_miles << endl;
}


