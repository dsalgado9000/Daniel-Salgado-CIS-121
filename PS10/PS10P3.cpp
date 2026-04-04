////
////  PS10P3.cpp
////  PS10
////
////  Created by Daniel Salgado on 4/3/26.
////
//
//#include <iostream>
//#include <iomanip>
//#include <string>
//using namespace std;
////function
//void compute_tuition(float credit_hours, float financial_aid, float& tuition, float& tuition_owed)
//{
//    tuition = credit_hours * 250;
//    tuition_owed = tuition - financial_aid;
//}
//int main()
//{
//    //define variables
//    float credit_hours, financial_aid, tuition, tuition_owed, sum_tuition_owed, average_tuition_owed;
//    string lname;
//    int C;
//    C = 0;
//    sum_tuition_owed = 0;
//    average_tuition_owed = 0;
//    
//    //input
//    cout << "Please enter your last name, credit hours, and financial aid. ctrl + d to stop" << endl;
//    cin >> lname >> credit_hours >> financial_aid;
//    
//    while (!cin.eof()) //begin of loop
//    {
//        compute_tuition(credit_hours, financial_aid, tuition, tuition_owed);
//        C = C + 1;
//        sum_tuition_owed = sum_tuition_owed + tuition_owed;
//        average_tuition_owed = sum_tuition_owed / C;
//        cout << setprecision(2) << fixed;
//        cout << lname << " Your tuition is: $" << tuition << " and your tuition owed after accounting for aid is: $" << tuition_owed << endl;
//        
//        cout << "Please enter your last name, credit hours, and financial aid. ctrl + d to stop" << endl;
//        cin >> lname >> credit_hours >> financial_aid;
//    } // end of loop
//    //after the loop
//    cout << endl;
//    cout << "The sum of all tuition owed of the entries came out to: $" << sum_tuition_owed << endl;
//    cout << "The total number of entries: " << C << endl;
//    cout << "The average of tuition owed of the entries came out to: $" << average_tuition_owed << endl;
//    return 0;
//}
