//
//  PS3P5.cpp
//  PS3 PS
//
//  Created by Daniel Salgado on 2/8/26.
//

#include <iostream>
using namespace std;
int main () {
    //define variables
    float fixedcost;
    float priceperunit;
    float costperunit;
    float denominator;
    float breakevenpoint;
    
    
    //input
    cout << "To find your break even point, please enter your fixed cost number";
    cin >> fixedcost;
    cout << "please enter your price per unit";
    cin >> priceperunit;
    cout << "please enter your cost per unit";
    cin >> costperunit;
    
    //process
    denominator = priceperunit - costperunit;
    breakevenpoint = fixedcost / denominator;
    
    //output
    cout << "your break even point in which the amount of items you must sell to cover all costs is " << breakevenpoint << "units" << endl;
    return 0;
    
}
