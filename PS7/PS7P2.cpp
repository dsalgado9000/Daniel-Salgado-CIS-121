//
//  PS7P2.cpp
//  PS7
//
//  Created by Daniel Salgado on 3/8/26.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //define variables
    string lastname;
    float hits, atbats, batting_average;
    int C;
    C = 0;
    //input
    cout << "Please enter Your last name, hits, and at bats. Ctrl+D to stop";
    cin >> lastname >> hits >> atbats;
    
    //process
    while (!cin.eof()) //begin of loop
        //in the loop
    {
        batting_average = hits / atbats;
        C = C + 1;
        
        cout << setprecision(2) << fixed;
        cout << lastname << " batting average is " << batting_average << endl;
        
        cout << "Please enter Your last name, hits, and at bats. Ctrl+D to stop";
        cin >> lastname >> hits >> atbats;
    } //end of loop
    //after the loop
    cout << endl;
    cout << "Number of entries: " << setw(6) << C << endl;
    
    return 0;
}
