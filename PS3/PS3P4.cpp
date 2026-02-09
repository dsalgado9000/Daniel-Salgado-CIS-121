//
//  PS3P4.cpp
//  PS3 PS
//
//  Created by Daniel Salgado on 2/8/26.
//

#include <iostream>
using namespace std;
int main(){
    
    //define variables
    float purchaseprice;
    float currentprice;
    float percentage1;
    float percentagechange;
    
    //input
    cout << "Please enter the purchase price of the stock";
    cin >> purchaseprice;
    cout << "Please enter the current price of the stock";
    cin >> currentprice;
    
    //process
    percentage1 = (currentprice - purchaseprice)/purchaseprice;
    percentagechange = percentage1 * 100;
    
    //output
    cout << "Your percentage change of the stock is" << percentagechange << "%" << endl;
    return 0;
}
