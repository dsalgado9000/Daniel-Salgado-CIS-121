//
//  PS1P3.cpp
//  PS1
//
//  Created by Daniel Salgado on 2/1/26.
//

#include <iostream>
using namespace std;
int main ()
{
    //define variables
    float score;
    string lastname;
    
    //input
    cout << "Please enter your last name";
    cin >> lastname;
    cout << "please enter your score";
    cin >> score;
    
    //process and output
    cout << lastname << " has a score of " << score << endl;
    return 0;
}
