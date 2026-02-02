//
//  main.cpp
//  PS2 - Daniel Salgado
//
//  Created by Daniel Salgado on 2/1/26.
//

#include <iostream>
using namespace std;

int main()
{
    //define variables
    float quantity, unitprice;
    float extended;
    
    //input
    cout << "enter quantity";
    cin >> quantity;
    cout << "enter unitprice";
    cin >> unitprice;
    //process
    extended = quantity * unitprice;
    
    //output
    cout << "extended price is " << extended << endl;
    return 0;
    
}
