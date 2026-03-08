//
//  PS7P3.cpp
//  PS7
//
//  Created by Daniel Salgado on 3/8/26.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    //Define variables
    string city;
    float miles, gallons, miles_per_gallon, total_miles_travelled;
    int C;
    total_miles_travelled = 0;
    C = 0;
    
    //input
    cout << "please enter your destination city, miles, and gallons used. Ctrl + D to stop";
    cin >> city >> miles >> gallons;
    
    //process
    while (!cin.eof()) //begin of loop
        //in the loop
    {
        miles_per_gallon = miles / gallons;
        C = C + 1;
        total_miles_travelled = total_miles_travelled + miles;
        
        cout << setprecision(2) << fixed;
        cout << "Your destination city is: " << city << endl;
        cout << "Your miles per gallon is: " << miles_per_gallon << endl;
        
        cout << "please enter your destination city, miles, and gallons used. Ctrl + D to stop";
        cin >> city >> miles >> gallons;
        
    } //end of loop
    //after of loop
    
    cout << endl;
    cout << "Total trips came out to " << C << endl;
    cout << "Total miles summed came out to " << total_miles_travelled << endl;
    
    return 0;
    
}
