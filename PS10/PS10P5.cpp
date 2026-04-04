//
//  PS10P5.cpp
//  PS10
//
//  Created by Daniel Salgado on 4/4/26.
//

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
//function
void compute_investment(float investment_amount, float five_yr_rate, float ten_yr_rate, float& five_year_amount, float& ten_year_amount)
{
    five_year_amount = investment_amount * (pow(1 + five_yr_rate, 5));
    ten_year_amount = investment_amount * (pow(1 + ten_yr_rate, 10));
}

int main()
{
    //define variables
    float investment_amount, five_yr_rate, ten_yr_rate, five_year_amount, ten_year_amount;
    
    //input
    cout << "Please enter your Investment amount, five year interest rate, and ten year interest rate. Please enter rates in decimal form. Ctrl + D" << endl;
    cin >> investment_amount >> five_yr_rate >> ten_yr_rate;
    
    //process
    while (!cin.eof()) //begin of loop
    {
        compute_investment(investment_amount, five_yr_rate, ten_yr_rate, five_year_amount, ten_year_amount);
        cout << "Your starting investing amount: $" << investment_amount << endl;
        cout << "Your five year amount: $" << five_year_amount << endl;
        cout << "Your ten year amount: $" << ten_year_amount << endl;
        
        cout << "Please enter your Investment amount, five year interest rate, and ten year interest rate. Please enter rates in decimal form. Ctrl + D" << endl;
        cin >> investment_amount >> five_yr_rate >> ten_yr_rate;
        
    } //end of loop
    // after the loop
    cout << endl;
    return 0;
    
}
