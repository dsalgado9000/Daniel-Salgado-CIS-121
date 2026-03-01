//
//  PS6P4.cpp
//  PS6 Code
//
//  Created by Daniel Salgado on 3/1/26.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Define Variables
    char code;
    char day;
    double cost;
    cout << fixed << showpoint << setprecision(2);
    
    //input
    cout << "Please enter your Equipment code";
    cin >> code;
    cout << "Please enter your if it was a Half day (H), or a Full day (F)";
    cin >> day;
    
    //process
    switch (code)
    {
        case 'A':
            switch (day)
            {
                case 'F':
                    cost = 10;
                    break;
                case 'H':
                    cost = 15;
                    break;
                default:
                    cost = 50;
                    break;
            }
            break;
            
        case 'B':
            switch (day)
            {
                case 'F':
                    cost = 20;
                    break;
                case 'H':
                    cost = 35;
                    break;
                default:
                    cost = 50;
                    break;
            }
            break;
            
        case 'C':
            switch (day)
            {
                case 'H':
                    cost = 40;
                    break;
                case 'F':
                    cost = 45;
                    break;
                default:
                    cost = 50;
                    break;
            }
            break;
            
        default:
            cost = 50;
            break;
    }
    
    //output
    
    cout << "Your rental cost came out to $" << cost << endl;
    return 0;
}
