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
    class Allowances {
    private:
        float TA;
        float DA;
        float HRA;

    public:
        void readAllowances() {
            cout << "Enter TA: ";
            cin >> TA;
            cout << "Enter DA: ";
            cin >> DA;
            cout << "Enter HRA: ";
            cin >> HRA;
        }

        void displayAllowances() {
            cout << "TA: " << TA << endl;
            cout << "DA: " << DA << endl;
            cout << "HRA: " << HRA << endl;
        }
    };

    Allowances allowances;

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
        
        allowances.readAllowances();
    }

    void displayData() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
        cout << "Designation: " << designation << endl;
        cout << "Age: " << age << endl;
        
        allowances.displayAllowances();
    }
};

int main() {
    Employee emp;
    
    emp.readData();
    emp.displayData();
    
    return 0;
}