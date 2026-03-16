//
//  PS8P3.cpp
//  PS8
//
//  Created by Daniel Salgado on 3/15/26.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//function
float compute_total_tuition(float credits)
{
    float total_tuition;
    total_tuition = credits * 250;
    return total_tuition;
}

int main()
{
    //define variables
    string lastname;
    float credits, total_tuition, sum_tuition_all;
    int C;
    sum_tuition_all = 0;
    C = 0;
    
    //Input
    cout << "Please enter Your last name and credits taken. Ctrl+d to stop";
    cin >> lastname >> credits;
    
    //process
    while (!cin.eof()) //begin of loop
        //in the loop
    {
        total_tuition = compute_total_tuition(credits);
        C = C + 1;
        sum_tuition_all = sum_tuition_all + total_tuition;
        cout << setprecision(2) << fixed;
        cout << "student: " << lastname << endl;
        cout << "credits taken: " << credits << endl;
        cout << "tuition owed: $" << total_tuition << endl;
        
        cout << "Please enter Your last name and credits taken.";
        cin >> lastname >> credits;
        
    } // end of loop
    //after the loop
    cout << endl;
    cout << "total entries: " << C << endl;
    cout << "Sum of all tuition owed: $" << sum_tuition_all << endl;
    return 0;
}
