//
//  PS4P7.cpp
//  PS4 code
//
//  Created by Daniel Salgado on 2/15/26.
//

#include <iostream>
using namespace std;
int main()
{
    //define variables
    float meal_cost;
    float tip;
    float overalltotal;
    
    //input
    cout << "please enter your total meal cost";
    cin >> meal_cost;
    
    //process
    if (meal_cost <= 25)
    {
        tip = 3;
    }
    else
    {
        tip = meal_cost * 0.20;
    }
    
    overalltotal = meal_cost + tip;
    
    //output
    
    cout << "Your meal cost came out to " << meal_cost << endl;
    cout << "Your tip came out to " << tip << endl;
    cout << "Your total came out to " << overalltotal << endl;
    
    return 0;
}
