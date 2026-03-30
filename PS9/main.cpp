//
//  main.cpp
//  PS9
//
//  Created by Daniel Salgado on 3/29/26.
//

#include <iostream>
#include <iomanip>
using namespace std;
// function
void call_total1(double quantity, double price, double &total)
{
     total =  quantity *  price;
   
}

void call_discount(float total, float &discount, float &discount_amount)
{
    if (total > 10000)
    {
        discount = .1;
        discount_amount = total * (1 - discount);
        cout << "Your total is $" << fixed << setprecision(2) << total << endl;
        cout << "Your total is $" << total << endl;
        cout << "Your total after the discount is $" << discount_amount << endl;
    }
    else
    {
        discount = .05;
        discount_amount = total * (1 - discount);
        cout << "Your total is $" << fixed << setprecision(2) << total << endl;
        cout << "Your total is $" << total << endl;
        cout << "Your total after the discount is $" << discount_amount << endl;
    }
}

int main()
{
  //define variable
    float quantity, price, discount = 0.0, discount_amount = 0.0, sum_discount;
    double total = 0.0, sum_total;
    sum_total = 0;
    sum_discount = 0;
    
    //input
    cout << "Please enter your quantity. Ctrl+d to stop";
    cin >> quantity;
    cout << "Please enter your price";
    cin >> price;
    
    //process
    while (!cin.eof()) //begin of loop
    {
        call_total1(quantity, price, total);
        call_discount(total, discount, discount_amount);
        sum_total = sum_total + total;
        sum_discount = sum_discount + discount_amount;
        cout << "Please enter your quantity. Ctrl+d to stop";
        cin >> quantity;
        cout << "Please enter your price";
        cin >> price;
    } //end of loop
    //after the loop
    cout << endl;
    cout << "The sum of all totals came out to: $" << sum_total << endl;
    cout << "the sum of all discount total came out to: $" << discount_amount << endl;
    return 0;
    
}


