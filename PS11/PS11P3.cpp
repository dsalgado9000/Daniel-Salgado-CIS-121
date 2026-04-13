//
//  PS11P3.cpp
//  PS11
//
//  Created by Daniel Salgado on 4/12/26.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
//function
float compute_mpg (float miles, float gallons)
{
    float mpg;
    mpg = miles/gallons;
    return mpg;
}
int main()
{
    //define variables
    float mpg, miles, gallons, sum_gallons, sum_miles;
    sum_gallons = 0;
    sum_miles = 0;
    ifstream infile;
    //connect file
    infile.open("/Users/bullsfanbears/Downloads/PS11/PS11/trips.txt");
    
    while (!infile.eof())
    {
        infile >> gallons >> miles;
        mpg = compute_mpg(miles, gallons);
        sum_gallons = sum_gallons + gallons;
        sum_miles = sum_miles + miles;
        cout << setprecision(2) << fixed;
        cout << "gallons: " << gallons << " miles: " << miles << " mpg: " << mpg << endl;
        cout << endl;
        
    } // end of loop
    //after the loop
    infile.close();
    cout << "Sum of all gallons: " << sum_gallons << endl;
    cout << "sum of all miles: " << sum_miles << endl;
    system ("pause");
    return 0;
}
