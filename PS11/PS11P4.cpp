//
//  PS11P4.cpp
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
float compute_salary(float annual_salary)
{
    float bi_weekly_salary;
    bi_weekly_salary = annual_salary / 26;
    return bi_weekly_salary;
}
int main()
{
    //define variables
    float annual_salary, bi_weekly_salary, average_annual, total_annual, C;
    string lastname;
    total_annual = 0;
    C = 0;
    ifstream infile;
    //connect to file
    infile.open("/Users/bullsfanbears/Downloads/PS11/PS11/empl.txt");
    
    while (!infile.eof())
    {
        infile >> lastname >> annual_salary;
        bi_weekly_salary = compute_salary(annual_salary);
        C = C + 1;
        total_annual = total_annual + annual_salary;
        
        cout << "Name: " << lastname << " Annual Salary: $" << annual_salary << " Bi weekly salary: $" << bi_weekly_salary << endl;
        cout << endl;
    } //end of loop
    //after the loop
    infile.close();
    average_annual = total_annual / C;
    cout << "average annual salary: $" << average_annual << endl;
    cout << "total annual salary: $" << total_annual << endl;
    cout << "Total entries: " << C << endl;
    system ("pause");
    return 0;
}
