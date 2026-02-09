//
//  PS3P2.cpp
//  PS3 PS
//
//  Created by Daniel Salgado on 2/8/26.
//

#include <iostream>
using namespace std;
int main (){
    //Define variables
    float stockprice;
    float quantitystock;
    float value;
    
    
    //Input
    cout << "Please enter your current stock price";
    cin >> stockprice;
    cout << "Please enter your quantity of stock";
    cin >> quantitystock;
    
    //Process
    value = stockprice * quantitystock;
    
    // Output
    cout << "Your current value of the stock in your portfolio is " << value << endl;
    return 0;
    
}
