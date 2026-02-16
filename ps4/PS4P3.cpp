//
//  PS4P3.cpp
//  PS4 code
//
//  Created by Daniel Salgado on 2/15/26.
//

#include <iostream>
using namespace std;
int main ()
{
    //define variables
    float books;
    float costperbook;
    float ordertotal;
    float shipping;
    float total;
    
    //input
    cout << "Please enter the number of books you have";
    cin >> books;
    cout << "please enter the cost per book";
    cin >> costperbook;
    
    //process
    ordertotal = books * costperbook;
    
    if (ordertotal <= 50)
    {
        shipping = 25;
    }
    else
    {
        shipping = 0;
    }
    
    total = ordertotal + shipping;
    
    //output
    cout << "For your intitial total, it came out to $" << ordertotal << endl;
    cout << "Your total with shipping came to $" << total << endl;
    cout << "If results are the same, that means shipping was free" << endl;
    
    
    return 0;
}
