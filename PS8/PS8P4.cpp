//
//  PS8P4.cpp
//  PS8
//
//  Created by Daniel Salgado on 3/15/26.
//

#include <iostream>
#include <iomanip>
using namespace std;
//function
float compute_unit_price(char product_code)
{
    float unit_price;
    if (product_code == 'W')
    {
        unit_price = 10;
    }
    else if(product_code == 'C')
    {
        unit_price = 15;
    }
    else
    {
        unit_price = 20;
    }
    return unit_price;
}
float compute_shipping(char product_code)
{
    float shipping;
    if (product_code == 'W')
    {
        shipping = 2;
    }
    else if(product_code == 'C')
    {
        shipping = 5;
    }
    else
    {
        shipping = 7;
    }
    return shipping;
}

int main()
{
    //define variables
    float quantity, shipping, unit_price, extended_price, total;
    char product_code;
    float sum_total_all;
    sum_total_all = 0;
    
    //input
    cout << "Please enter your Product code (W,C, or G) and your quantity. Ctrl+d to stop";
    cin >> product_code >> quantity;
    
    //process
    while (!cin.eof()) //begin of loop
        //in the loop
    {
        unit_price = compute_unit_price(product_code);
        shipping = compute_shipping(product_code);
        extended_price = quantity * unit_price;
        total = shipping + extended_price;
        sum_total_all = sum_total_all + total;
        
        cout << setprecision(2) << fixed;
        cout << "Product code: " << product_code << endl;
        cout << "Unit price: $" << unit_price << endl;
        cout << "shipping: $" << shipping << endl;
        cout << "Your extended price: $" << extended_price << endl;
        cout << "Your total came out to: $" << total << endl;
        
        cout << "Please enter your Product code (W,C, or G) and your quantity. Ctrl+d to stop";
        cin >> product_code >> quantity;
    } //end of loop
    //after the loop
    cout << endl;
    cout << "Sum of all totals came out to: $" << sum_total_all << endl;
    return 0;
    
}
