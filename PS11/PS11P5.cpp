//
//  PS11P5.cpp
//  PS11
//
//  Created by Daniel Salgado on 4/12/26.
//
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
//function
void compute_tuition(char code, float credits, float& cost_per, float& tuition_owed, float& course_fees)
{
    if (code =='I')
    {
        cost_per = 250;
        tuition_owed = credits * cost_per;
        course_fees = tuition_owed * 0.1;
    }
    else
    {
        cost_per = 500;
        tuition_owed = credits * cost_per;
        course_fees = tuition_owed * 0.1;
    }
}
int main()
{
    //define variables
    float credits, cost_per, tuition_owed, course_fees, sum_tuition, average_tuition;
    char code;
    int C;
    string lastname;
    ifstream infile;
    C = 0;
    cost_per = 0;
    tuition_owed = 0;
    course_fees = 0;
    sum_tuition = 0;
    average_tuition = 0;
    //connect file
    infile.open("/Users/bullsfanbears/Downloads/PS11/PS11/student.txt");
    
    while (!infile.eof())
    {
        infile >> lastname >> code >> credits;
        compute_tuition(code, credits, cost_per, tuition_owed, course_fees);
        C = C + 1;
        sum_tuition = sum_tuition + tuition_owed;
        cout << setprecision(2) << fixed;
        cout << "Name: " << lastname << " Code: " << code << " cost per credit: $" << cost_per << " credits: " << credits << " tuition owed: $" << tuition_owed << " course fees: $" << course_fees << endl;
        cout << endl;
    } //end of loop
    //after the loop
    average_tuition = sum_tuition / C;
    infile.close();
    cout << "Sum of all tuitions: $" << sum_tuition << " total entries: " << C << " average_tuition: $" << average_tuition << endl;
    system ("pause");
    return 0;
}
