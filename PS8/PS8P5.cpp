//
//  PS8P5.cpp
//  PS8
//
//  Created by Daniel Salgado on 3/15/26.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//function
float compute_lab_fee(int course_code)
{
    float lab_fee;
    if (course_code == 101)
    {
        lab_fee = 50;
    }
    else if (course_code == 121)
    {
        lab_fee = 100;
    }
    else if (course_code == 111)
    {
        lab_fee = 25;
    }
    else if (course_code == 112)
    {
        lab_fee = 35;
    }
    else if (course_code == 100)
    {
        lab_fee = 55;
    }
    else
    {
        lab_fee = 50;
    }
    return lab_fee;
}

int main()
{
    //define variables
    float lab_fee, total_lab_fee, average_lab_fee;
    string department;
    int course_code;
    int C;
    C = 0;
    total_lab_fee = 0;
    average_lab_fee = 0;
    course_code = 0;
    
    //input
    cout << "Please enter your department, and course code. Ctrl+d to stop";
    cin >> department >> course_code;
    
    //process
    while (!cin.eof()) //begin of loop
        //in the loop
    {
        lab_fee = compute_lab_fee(course_code);
        C = C + 1;
        total_lab_fee = total_lab_fee + lab_fee;
        average_lab_fee = total_lab_fee / C;
        cout << setprecision(2) << fixed;
        cout << "Department: " << department << endl;
        cout << "course code: " << course_code << endl;
        cout << "Lab fee came out to: $" << lab_fee << endl;
        
        cout << "Please enter your department, and course code. Ctrl+d to stop";
        cin >> department >> course_code;
    } //end of loop
    //after the loop
    cout << endl;
    cout << "The average of lab fee came out to: $" << average_lab_fee << endl;
    return 0;
}
