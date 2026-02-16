//
//  main.cpp
//  PS4 code
//
//  Created by Daniel Salgado on 2/15/26.
// PS4P1

#include <iostream>
using namespace std;
int main()
{
    //Define Variables
    float quantity;
    float unitprice;
    float extendedprice;
    float tax;
    float total;
    
    //input
    cout << "Please enter the quantity of Items you own";
    cin >> quantity;
    
    //Process
    if (quantity >= 1000)
    {
        unitprice = 3;
    }
        else
        {
            unitprice = 5;
    }
    
    extendedprice = quantity * unitprice;
    tax = extendedprice * 0.07;
    total = extendedprice + tax;
    
    //output
    cout << "You stated your quantity is " << quantity << " Your unit price is " << unitprice << " your extended price is " << extendedprice << " your tax is " << tax << " and your total is " << total << endl;
    
    return 0;
    
}
