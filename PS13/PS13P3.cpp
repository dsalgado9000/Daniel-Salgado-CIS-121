//
//  PS13P3.cpp
//  PS13
//
//  Created by Daniel Salgado on 4/26/26.
//

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Student {
    string firstname;
    string lastname;
    char districtcode;
    int credits;
    double tuitionbalance;
};

double computetuition(char code, int credits) {
    double rate;
    if (code == 'I' || code == 'i') {
        rate = 250.00;
    } else {
        rate = 500.00;
    }
    return credits * rate;
}

void displaystudents(vector<Student> studentList)
{

    for (Student s : studentList)
    {
        cout << "Name: " << s.firstname << " " << s.lastname << endl;
        cout << "District: " << s.districtcode << endl;
        cout << "Credits: " << s.credits << endl;
        cout << "Tuition: $" << fixed << setprecision(2) << s.tuitionbalance << endl;
    }
}

int main() {
    vector<Student> students;
    string fName;
    
    cout << "Enter student first name please enter ctrl+d to stop: ";
    while (cin >> fName)
    {
        Student tempStudent;
        tempStudent.firstname = fName;
        
        cout << "Enter last name: ";
        cin >> tempStudent.lastname;
        
        cout << "Enter district code (I for In-district, O for Out): ";
        cin >> tempStudent.districtcode;
        
        cout << "Enter credits taken: ";
        cin >> tempStudent.credits;
        
        tempStudent.tuitionbalance = computetuition(tempStudent.districtcode, tempStudent.credits);
        
        students.push_back(tempStudent);
        
        cout << "Enter next student first name please enter ctrl+d to stop: ";
    }

    displaystudents(students);
    
    cout << "Total number of entries: " << students.size() << endl;

    return 0;
}

