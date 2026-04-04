////
////  main.cpp
////  PS10
////
////  Created by Daniel Salgado on 4/3/26.
////
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
////function
//void compute_total(float quantity, float price, float& total, float& tax, float& total_order)
//{
//    total = quantity * price;
//    tax = total * 0.07;
//    total_order = total + tax;
//}
//
//int main()
//{
//    //define variable
//    float quantity, price, total, tax, total_order, sum_total_order, sum_total_tax;
//    sum_total_order = 0;
//    sum_total_tax = 0;
//    //input
//    cout << "Please enter your quantity and price. Ctrl + d to stop." << endl;
//    cin >> quantity >> price;
//    
//    //process
//    while (!cin.eof()) //begin of loop
//    {
//        compute_total(quantity, price, total, tax, total_order);
//        sum_total_tax = sum_total_tax + tax;
//        sum_total_order = sum_total_order + total_order;
//        
//        cout << setprecision(2) << fixed;
//        cout << "Your total is: $" << total << endl;
//        cout << "Your tax is: $" << tax << endl;
//        cout << "Your total with tax came out to: $" << total_order << endl;
//        
//        cout << "Please enter your quantity and price. Ctrl + d to stop." << endl;
//        cin >> quantity >> price;
//    } //end of loop
//    //after the loop
//    cout << endl;
//    cout << "The sum of all taxes came out to: $" << sum_total_tax << endl;
//    cout << "The sum of all the orders with tax came out to: $" << sum_total_order << endl;
//    return 0;
//    
//}
