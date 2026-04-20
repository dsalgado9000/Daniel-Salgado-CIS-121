//
//  main.cpp
//  PS12
//
//  Created by Daniel Salgado on 4/19/26.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void load_array(string fname[], string lname[], float gpa[])
{
    int i;
    ifstream infile;
    infile.open("/Users/bullsfanbears/Downloads/PS12/PS12/datafile.txt");
    for(i=0;i<=9;i++)
    {
        infile >> fname[i] >> lname[i] >> gpa[i];
    }
    
    infile.close();
}
void print_array(string fname[], string lname[], float gpa[])
{
    int i;
    for (i = 9; i >= 0 ; i--)
    {
        cout << fname[i] << " " << lname[i] << " " << gpa[i] << endl;
    }
}
int main()
{
    string fname[10], lname[10];
    float gpa[10];
    
    load_array(fname, lname, gpa);
    print_array(fname, lname, gpa);
    
    return 0;
}
