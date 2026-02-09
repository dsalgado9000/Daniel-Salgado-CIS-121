//
//  PS3P3.cpp
//  PS3 PS
//
//  Created by Daniel Salgado on 2/8/26.
//

#include <iostream>
using namespace std;
int main()
{
    //Define Variables
    float total;
    float totaltip;
    float tip;
    
    //input
    cout << "Please enter your total";
    cin >> total;
    
    //process
    tip = total * 0.15;
    totaltip = total + tip;
    
    // output
    cout << "Your total with a 15% tip added comes out to " << totaltip << endl;
    return 0;
    
}
