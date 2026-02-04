//
//  main.cpp
//  PS1
//
//  Created by Daniel Salgado on 2/1/26.
//

#include <iostream>
using namespace std;
int main(){
    //define variables
    string firstname;
    string lastname;
    
    //input
    cout << "what is your first name?";
    cin >> firstname;
    cout << "what is your last name?";
    cin >> lastname;
    
    //Process and output
    cout << "Hello " << lastname << endl;
    return 0;
}
