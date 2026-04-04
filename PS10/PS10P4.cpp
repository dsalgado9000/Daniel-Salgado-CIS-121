////
////  PS10P4.cpp
////  PS10
////
////  Created by Daniel Salgado on 4/4/26.
////
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
////function
//void compute_total(float widgets, float& cost_per_widget, float& extended_price, float& sales_tax, float& total)
//{
//    if (widgets >= 10000)
//    {
//        cost_per_widget = 4.00;
//        extended_price = widgets * cost_per_widget;
//        sales_tax = extended_price * 0.07;
//        total = extended_price + sales_tax;
//    }
//    else if (widgets >= 5000)
//    {
//        cost_per_widget = 5.00;
//        extended_price = widgets * cost_per_widget;
//        sales_tax = extended_price * 0.07;
//        total = extended_price + sales_tax;
//    }
//  else
//  {
//      cost_per_widget = 10.00;
//      extended_price = widgets * cost_per_widget;
//      sales_tax = extended_price * 0.07;
//      total = extended_price + sales_tax;
//  }
//    
//}
//int main()
//{
//    //define variables
//    float widgets, cost_per_widget, extended_price, sales_tax, total, sum_total;
//    sum_total = 0;
//    
//    //input
//    cout << "Please enter your total number of widgets. ctrl + d to stop" << endl;
//    cin >> widgets;
//    
//    //process
//    while (!cin.eof()) //begin of loop
//    {
//        compute_total(widgets, cost_per_widget, extended_price, sales_tax, total);
//        sum_total = sum_total + total;
//        cout << setprecision(2) << fixed;
//        cout << "Your listed widgets: " << widgets << endl;
//        cout << "Your cost per widget: $" << cost_per_widget << endl;
//        cout << "Your extended price: $" << extended_price << endl;
//        cout << "Your sales tax: $" << sales_tax << endl;
//        cout << "Your total is: $" << total << endl;
//        
//        cout << "Please enter your total number of widgets. ctrl + d to stop" << endl;
//        cin >> widgets;
//    }//end of loop
//    //after the loop
//    cout << endl;
//    cout << "The sum of all totals came out to: $" << sum_total << endl;
//    return 0;
//}
