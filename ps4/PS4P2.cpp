//
//  PS4P2.cpp
//  PS4 code
//
//  Created by Daniel Salgado on 2/15/26.
//

#include <iostream>
using namespace std;
int main ()
{
    //Define variables
    float quantity;
    float unitprice;
    float extendedprice;
    char item;

    
    //input
    cout << "Please enter Which item you have, A or B";
    cin >> item;
    cout << "please enter the quantity you have of either Item A or B";
    cin >> quantity;
    
    //process
    if (item == 'A')
    {
        unitprice = 10;
    }
    else
    {
        unitprice = 20;
    }
    
    extendedprice = unitprice * quantity;
    
    //output
    
    cout << "You stated your item is " << item << " and your quantity is " << quantity << endl;
    cout << "That means your unit price is " << unitprice << " and your extened price is " << extendedprice << endl;
    
    return 0;
    

    
}
