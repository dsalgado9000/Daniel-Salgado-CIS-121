//
//  PS4P9.cpp
//  PS4 code
//
//  Created by Daniel Salgado on 2/15/26.
//

#include <iostream>
using namespace std;
int main ()
{
    //define variables
    float base;
    float height;
    float hypotenuse;
    float total_step1;
    float total_final;
    
    //input
    cout << "please input your base of the triangle";
    cin >> base;
    cout << "please input your height of the triangle";
    cin >> height;
    cout << "please input your hypotenuse of the triangle";
    cin >> hypotenuse;
    
    //process
    
    total_step1 = (base * base) + (height * height);
    total_final = sqrt(total_step1);
    
    //output
    if (total_final == hypotenuse)
    {
        cout << " Is a right angle" << endl;
    }
    else
    {
        cout << "not a right angle" << endl;
    }
    
    
    
    return 0;
    
    
}
