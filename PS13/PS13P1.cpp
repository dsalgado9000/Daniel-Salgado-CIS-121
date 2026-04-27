#include <iostream>
#include <vector>
#include <string>
using namespace std;
void displayauto(string models[], string makes[], int n)
{
    int i;
    for (i=0; i<=n; i++)
    {
        cout << "Car: " << i + 1 << " " <<  models[i] << " " << makes[i] << endl;
    }
}
int main()
{
    int i;
    string* models;
    string* makes;
    models = new string[8];
    makes = new string[8];
    
    for (i=0; i <= 7; i++)
    {
        cout << "Please enter your Model and Make";
        cin >> models[i] >> makes[i];
    }
    displayauto(models, makes, 8);

    return 0;
}
