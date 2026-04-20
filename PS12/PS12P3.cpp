//
//  PS12P3.cpp
//  PS12
//
//  Created by Daniel Salgado on 4/19/26.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void load_array(string fname[], string lname[], float salary[])
{
    int i;
    ifstream infile;
    infile.open("/Users/bullsfanbears/Downloads/PS12/PS12/Salary.txt");
    for (i=0;i<=9;i++)
    {
        infile >> fname[i] >> lname[i] >> salary[i];
    }
    
    infile.close();
}
void print_array(string fname[], string lname[], float salary[])
{
    int i;
    for (i=0; i<=9; i++)
    {
        cout << fname[i] << " " << lname[i] << " " << salary[i] << endl;
    }
}
void search_array(string fname[], string lname[], float salary[], string slname)
{
    int i;
    bool found_lastname = false;
    
    for(i=0; i<=9 && found_lastname == false; i++)
    {
        if (slname == lname[i])
        {
            cout << fname[i] << " " << lname[i] << " " << salary[i] << endl;
            found_lastname = true;
        }
    }
    if(found_lastname == false)
    {
        cout << slname << " is not found" << endl;
    }
}
int main()
{
    string fname[10], lname [10];
    float salary [10];
    string slname;
    
    load_array(fname, lname, salary);
    print_array(fname, lname, salary);
    
    cout << "Please enter the last name you want to search for, ctrl+d to stop";
    cin >> slname;
    while (!cin.eof())
    {
        search_array(fname, lname, salary, slname);
        
        cout << "Please enter the last name you want to search for, ctrl+d to stop";
        cin >> slname;
        
    }
    return 0;
}
