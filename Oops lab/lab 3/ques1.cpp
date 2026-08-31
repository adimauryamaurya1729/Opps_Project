#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int code;
    string designation;
    int age;

public:
    void readData() {
        cout << "Enter Employee Name: ";
        getline(cin, name);
        
        cout << "Enter Employee Code: ";
        cin >> code;
        
        cin.ignore(); 
        cout << "Enter Employee Designation: ";
        getline(cin, designation);
        
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayData() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
        cout << "Designation: " << designation << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Employee emp;
    
    emp.readData();
    emp.displayData();
    
    return 0;
}