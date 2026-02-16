//
//  PS4P10.cpp
//  PS4 code
//
//  Created by Daniel Salgado on 2/15/26.
//

#include <iostream>
using namespace std;
int main()
{
    //define variables
    float n1;
    float n2;
    
    //input
    cout << "please enter Your first number";
    cin >> n1;
    cout << "please enter your second number";
    cin >> n2;
    
    //process and output
    if (n1 <= n2)
    {
        cout << "Is not greater" << endl;
    }
    else
    {
        cout << "Is greater" << endl;
    }
    
    return 0;
}
