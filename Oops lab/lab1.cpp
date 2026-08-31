#include <iostream>
using namespace std;

// Defining the class
class Adder {
private:
    // Encapsulated data members
    int num1, num2, totalSum; 

public:
    // Method to take input from the user
    void getNumbers() {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }

    // Method to perform the addition
    void calculateSum() {
        totalSum = num1 + num2;
    }

    // Method to display the final result
    void displayResult() {
        cout << "The sum of " << num1 << " and " << num2 << " is: " << totalSum << endl;
    }
};

int main() {
    // Creating an object of the Adder class
    Adder additionObject; 

    // Calling the methods using the object
    additionObject.getNumbers();
    additionObject.calculateSum();
    additionObject.displayResult();

    return 0;
}