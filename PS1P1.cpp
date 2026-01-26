//////
//////  main.cpp
//////  PS1P1
//////
//////  Created by Daniel Salgado on 1/25/26.
//////
////
#include <iostream>
using namespace std;
#include <string>
int main()
{
    std:: string firstname;
    std:: string lastname;

    std::cout << "please enter first and last name";
    std::cin >> firstname >> lastname;
    
    std::cout << "Hello " << lastname << std::endl;
   

    return 0;
}

