//
//  PS5P5.cpp
//  PS5 code
//
//  Created by Daniel Salgado on 2/21/26.
//

#include <iostream>
#include <iomanip>
using namespace std;
    int main ()
{
    //define variables
    double weight, rate, total;
    cout << fixed << showpoint << setprecision(2);

    //input
    cout << "Please enter the weight of the metal";
    cin >> weight;

    //process
    if (weight > 100)
    {
        rate = 0.50;
    }
    else if (weight <= 100 || weight >= 30)
{
    rate = .25;
}
    else if  ( weight < 30 || weight >= 20)
{
    rate = 0.20;
}
    else
        rate = 0.10;

        total = weight * rate;

//output
        cout << "Your weight was entered at "  << weight << endl;
        cout << "Your rate come out to " << rate << " per pound" << endl;
        cout << "Your total came out to $" << total <<  endl;

        return 0;


}
