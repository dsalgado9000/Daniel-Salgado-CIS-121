//
//  PS4P8.cpp
//  PS4 code
//
//  Created by Daniel Salgado on 2/15/26.
//

#include <iostream>
using namespace std;
int main ()
{
    //define variables
     char gasoline;
    float gallons;
    float costper;
    float total;
   
    
    //input
    
    cout << "please enter which gasoline you selected, P for premium or R for regular";
    cin >> gasoline;
    cout << "please enter the amount of gallons you selected";
    cin >> gallons;
    
    //process
    if (gasoline == 'P')
    {
        costper = 2.75;
    }
    else
    {
        costper = 2.25;
    }
    
    total = costper * gallons;
    
    //output
    cout << "You selected gasoline " << gasoline << endl;
    cout << "Your cost per gallon came out to $" << costper << endl;
    cout << "Your total gallons you entered was " << gallons << endl;
    cout << "Your total came out to $" << total << endl;
    
    return 0;
    
}
