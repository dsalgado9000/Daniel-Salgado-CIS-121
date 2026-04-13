//
//  PS11P2.cpp
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
float compute_price(float quantity, float price)
{
    float extended_price;
    extended_price = quantity * price;
    return extended_price;
}
int main ()
{
    //define variables
    float quantity, price, extended_price, sum_extended, tax, total;
    string item;
    extended_price = 0;
    sum_extended = 0;
    ifstream infile;
    //connect to file
    infile.open("/Users/bullsfanbears/Downloads/PS11/PS11/grocery.txt");
 
    while (!infile.eof())
    {
        infile >> item >> quantity >> price;
        extended_price = compute_price(quantity, price);
        sum_extended = sum_extended + extended_price;
        tax = extended_price * 0.07;
        total = tax + extended_price;
        
        cout << setprecision(2) << fixed;
        cout << "item: " << item << " extended price: $" << extended_price << " tax: $" << tax << " total: $" << total << endl;
        
        cout << endl;
    }//after the loop
    //end of loop
    infile.close();
    cout << "Total sum of all extended prices: $" << sum_extended << endl;
    system ("pause");
    return 0;
}
