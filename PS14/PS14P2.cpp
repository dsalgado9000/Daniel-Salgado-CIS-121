//
//  PS14P2.cpp
//  PS14
//
//  Created by Daniel Salgado on 5/3/26.
//

#include <iostream>
#include <iomanip>
#include <string>
#include "Header.h2"
using namespace std;

int main()
{
    string make, model, cpu, ram, harddrive, type;
    computer mycomputer;
    
    cout << "Please enter Your car info, press ctrl+d to stop" << endl;
    
    while (cout << "Please enter your Make: " && cin >> make)
    {
        cout << "Please enter your model: ";
        cin >> model;
        cout << "Please enter your CPU: ";
        cin >> cpu;
        cout << "Please enter your RAM: ";
        cin >> ram;
        cout << "Please enter your hard drive: ";
        cin >> harddrive;
        cout << "Please enter your type: ";
        cin >> type;
        
        mycomputer.computer_make(make);
        mycomputer.computer_model(model);
        mycomputer.computer_cpu(cpu);
        mycomputer.computer_ram(ram);
        mycomputer.computer_harddrive(harddrive);
        mycomputer.computer_type(type);
        
        cout << "Computer make: " <<  mycomputer.computer_make() << endl;
        cout << "Computer model: " <<  mycomputer.computer_model() << endl;
        cout << "Computer CPU: " <<  mycomputer.computer_cpu() << endl;
        cout << "Computer Ram:  " << mycomputer.computer_ram() << endl;
        cout << "Computer Hard Drive: " << mycomputer.computer_harddrive() << endl;
        cout << "Computer Type: " << mycomputer.computer_type() << endl;
        cout << "Computer cost: " <<  mycomputer.cost() << endl;
        cout << "Please enter your next computer make, ctrl+d to stop" << endl;
    }
    cout << "end";
    return 0;
}
