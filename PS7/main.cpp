//
//  main.cpp
//  PS7
//
//  Created by Daniel Salgado on 3/8/26.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //Define variables
    float quantity, price, extendedprice, discount_amount, discount_price;
    float total_discounted_prices;
    total_discounted_prices = 0;
    //Input
    cout << "Please enter quantity and price, ctrl+d to stop";
    cin >> quantity >> price;
    
    //Process
    extendedprice = quantity * price;
    
    while (!cin.eof())     //Begin of loop
        //in the loop
    {
        extendedprice = quantity * price;
        if (quantity > 1000)
        {
            discount_amount = extendedprice * 0.1;
            discount_price = extendedprice - discount_amount;
        }
        else
        {
            discount_amount = 0;
            discount_price = 0;
        }
        total_discounted_prices = total_discounted_prices + discount_price;
        
        cout << setprecision(2) << fixed;
        cout << "Quantity: " << quantity << endl;
        cout << "price: $" << price << endl;
        cout << "Discount amount: $" << discount_amount << endl;
        cout << "discount price: $" << discount_price << endl;
        
        cout << "Please enter quantity and price, ctrl+d to stop";
        cin >> quantity >> price;
    } //end of Loop
    //after the loop
    cout << endl;
    cout << "Total of all discounted prices: " << total_discounted_prices << endl;
    return 0;

    
}


