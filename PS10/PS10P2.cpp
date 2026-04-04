////
////  PS10P2.cpp
////  PS10
////
////  Created by Daniel Salgado on 4/3/26.
////
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
////function
//void compute_postage(float weight, float code, float& pass_postage, float& area_charge, float& weight_charge)
//{
//    if (code == 60171)
//        area_charge = 2.00;
//    else if (code == 60172)
//        area_charge = 2.50;
//    else if (code == 60635)
//        area_charge = 3.00;
//    else
//        area_charge = 5.00;
//    
//    if (weight > 100)
//    {
//        weight_charge = weight * 0.02;
//        pass_postage = weight_charge + area_charge;
//    }
//    else if (weight <= 100 || weight > 50)
//    {
//        weight_charge = weight * 0.03;
//        pass_postage = weight_charge + area_charge;
//    }
//    else
//    {
//        weight_charge = weight * 0.05;
//        pass_postage = weight_charge + area_charge;
//    }
//}
//
//int main()
//{
//    //define variables
//    float weight, code, pass_postage, area_charge, weight_charge;
//    int C;
//    C = 0;
//    
//    //input
//    cout << "Please enter your area code. Ctrl + d to stop" << endl;
//    cin >> code;
//    cout << "Please enter weight" << endl;
//    cin >> weight;
//    
//    while (!cin.eof()) //begin of loop
//    {
//        compute_postage(weight, code, pass_postage, area_charge, weight_charge);
//        C = C + 1;
//        cout << setprecision(2) << fixed;
//        cout << "Your area charge is: $" << area_charge << endl;
//        cout << "Your weight_charge is: $" << weight_charge << endl;
//        cout << "Your Postage charge came out to: $" << pass_postage << endl;
//        
//        cout << "Please enter your area code. Ctrl + d to stop" << endl;
//        cin >> code;
//        cout << "Please enter weight" << endl;
//        cin >> weight;
//    } //end of loop
//    // after the loop
//    cout << endl;
//    cout << "Total entries made: " << C << endl;
//}
