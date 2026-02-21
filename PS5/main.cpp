//
//  main.cpp
//  PS5 code
//
//  Created by Daniel Salgado on 2/20/26.
//

#include <iostream>
using namespace std;
int main ()
{
    //define variables
    double score;
    string lastname;
    string lettergrade;
    
    //input
    cout << "Please enter your last name";
    cin >> lastname;
    cout << "Please enter the score you received";
    cin >> score;
    
    //Process and Output 
    if (score >=90)
    {
        cout << lastname << " Your letter grade is a A" << endl;
    
    }
    else if (score < 90 || score >=80)
    {
        cout << lastname << " Your letter grade is a B" << endl;
    }
    else if (score < 80 || score >= 70)
    {
        cout << lastname << " Your letter grade is a C" << endl;
    }
    else if (score < 70 || score >=60)
    {
        cout << lastname << " Your letter grade is a D" << endl;
    }
    else
        cout << lastname << "Your letter grade is an F" << endl;

 return 0;

}

