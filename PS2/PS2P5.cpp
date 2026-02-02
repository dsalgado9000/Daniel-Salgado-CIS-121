//
//  PS2P5.cpp
//  PS2 - Daniel Salgado
//
//  Created by Daniel Salgado on 2/1/26.
//

#include <iostream>
using namespace std;
int main()
{
    //Defining Variables
    float priceitem, discountpercent;
    float discountammount;
    float discountprice;
    
    //Input
    cout << "Please enter the price of the item";
    cin >> priceitem;
    cout << "please enter the discount in decimal form (ex 50% = .5)";
    cin >> discountpercent;
    
    //process
    discountprice = priceitem - (priceitem * discountpercent);
    discountammount = priceitem - discountprice;
    
    //output
    cout << "Your discount ammount you are saving is " << discountammount << " And your new discounted price of the item is " << discountprice << endl;
    return 0;
}
