//
//  PS2P3.cpp
//  PS2 - Daniel Salgado
//
//  Created by Daniel Salgado on 2/1/26.
//

#include <iostream>
using namespace std;

int main()
{
    //define variables
    float length, width;
    float area;
    float circumference;
    
    //input
    cout << "please enter the length";
    cin >> length;
    cout << "please enter the width";
    cin >> width;
    
    //process
    area = length * width;
    circumference = (length + length) + (width + width);
    
    //output
    cout << "Your area is " << area << " and your circumference is " << circumference << endl;
    return 0;
    
}
