//
//  PS9P2.cpp
//  PS9
//
//  Created by Daniel Salgado on 3/29/26.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//function
void call_batting_avg(double &hits, double &atbats, double &batting_avg)
{
    batting_avg = hits / atbats;
    
}
int main()
{
    double hits, atbats, batting_avg;
    int C;
    string lastname;
    C = 0;
    batting_avg = 0;
    
    //input
    cout << "Please enter your last name. ctrl + d to stop";
    cin >> lastname;
    cout << "please enter your hits and total atbats";
    cin >> hits >> atbats;
    
    //process
    while (!cin.eof()) //begin of loop
    {
        call_batting_avg(hits, atbats, batting_avg);
        cout << lastname << " Your batting avg is " << batting_avg << endl;
        C = C + 1;
        cout << "Please enter your last name. ctrl + d to stop";
        cin >> lastname;
        cout << "please enter your hits and total atbats";
        cin >> hits >> atbats;
    } //end of loop
    //after the loop
    cout << endl;
    cout << "Total number of players that entered data was: " << C << endl;
    return 0;
}
