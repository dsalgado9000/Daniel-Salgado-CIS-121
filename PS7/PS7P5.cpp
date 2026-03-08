//
//  PS7P5.cpp
//  PS7
//
//  Created by Daniel Salgado on 3/8/26.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //Define Variables
    string lastname;
    char code;
    float credit_hours, tuition, total_sum_tuition, total_credit_hours;
    int C;
    C = 0;
    total_sum_tuition = 0;
    total_credit_hours = 0;
    
    //input
    cout << "Please enter your Lastname, credit hours, and District Code (I for in district, O for out of district) ctrl+D to stop";
    cin >> lastname >> credit_hours >> code;
    
    //Process
    while (!cin.eof()) //begin of loop
        //in the loop
    {
        if (code == 'I')
        {
            tuition = 250 * credit_hours;
        }
        else
        {
            tuition = 550 * credit_hours;
        }
        
        C = C + 1;
        total_sum_tuition = total_sum_tuition + tuition;
        total_credit_hours = total_credit_hours + credit_hours;
        
        cout << setprecision(2) << fixed;
        cout << "Student: " << lastname << endl;
        cout << "Tuition owed: $" << tuition << endl;
        
        cout << "Please enter your Lastname, credit hours, and District Code (I for in district, O for out of district) ctrl+D to stop";
        cin >> lastname >> credit_hours >> code;
    } //end of loop
    //after the loop
    
    cout << endl;
    cout << "Total sum of tuition: " << total_sum_tuition << endl;
    cout << "Total sum of credit hours: " << total_credit_hours << endl;
    cout << "Total entries: " << C << endl;
    return 0;
}
