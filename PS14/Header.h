//
//  Header.h
//  PS14
//
//  Created by Daniel Salgado on 5/3/26.
//

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class membership
{
public:
    membership();
    void membership_firstname(string);
    string membership_firstname();
    void membership_lastname(string);
    string membership_lastname();
    void Age(float age);
    void Type(string type);
    float cost();
    
protected:
    string p_firstname;
    string p_lastname;
    float p_age;
    string p_type;
    float p_cost;
};
membership::membership()
{
    p_firstname = "Not entered";
    p_lastname = "Not entered";
    p_age = 18;
    p_type = "Bronze";
}
void membership :: membership_firstname(string firstname)
{
    p_firstname = firstname;
}
string membership::membership_firstname()
{
    return p_firstname;
}
void membership :: membership_lastname(string lastname)
{
    p_lastname = lastname;
}
string membership::membership_lastname()
{
    return p_lastname;
}
void membership :: Age(float age)
{
    p_age = age;
}
void membership::Type(string type)
{
    p_type = type;
}
float membership::cost()
{
    if (p_type == "Gold")
    {
        p_cost = 1200;
    }
    else if (p_type == "Silver")
    {
        p_cost = 1000;
    }
    else
    {
        p_cost = 500;
    }
    if (p_age > 50)
    {
        p_cost *= 0.90;
    }
    return p_cost;
}
