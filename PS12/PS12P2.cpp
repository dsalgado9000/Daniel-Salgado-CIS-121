//
//  PS12P2.cpp
//  PS12
//
//  Created by Daniel Salgado on 4/19/26.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void load_array(string city[], float population[])
{
    int i;
    ifstream infile;
    infile.open("/Users/bullsfanbears/Downloads/PS12/PS12/city.txt");
    for (i=0;i<=7;i++)
    {
        infile >> city[i] >> population[i];
    }
    
    infile.close();
}
void print_array(string city[], float population[])
{
    int i;
    for (i=0; i<=7; i++)
    {
        cout << city[i] << " " << population[i] << endl;
    }
}
void search_array(string city[], float population[], string scity)
{
    int i;
    bool found_city = false;
  
    for (i=0; i<=7 && found_city == false; i++)
    {
        if (scity == city[i])
        {
            cout << city[i] << " " << population[i] << endl;
            found_city = true;
        }
    }
    if(found_city == false)
    {
        cout << scity << " is not found" << endl;
    }
}
int main()
{
    string city[8];
    float population[8];
    string scity;
    
    load_array(city, population);
    print_array(city, population);
    
    cout << "Please enter city to search for, ctrl+d to stop";
    cin >> scity;
    while(!cin.eof())
    {
        search_array(city, population, scity);
        
        cout << "Please enter city to search for, ctrl+d to stop";
        cin >> scity;
    }
    return 0;
}
