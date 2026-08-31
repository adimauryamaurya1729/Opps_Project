#include <iostream>
using namespace std;

class DigitSumCalculator {
private:
    int number;
    int sum;

public:
    DigitSumCalculator() {
        sum = 0;
    }

    void inputNumber() {
        cout << "Enter a 3-digit number: ";
        cin >> number;
    }

    void calculateSum() {
        int temp = number; 
        sum = 0;           
        
        while (temp > 0) {
            int lastDigit = temp % 10;  
            sum += lastDigit;           
            temp /= 10;                 
        }
    }

    void displayResult() {
        cout << "The sum of the digits of " << number << " is: " << sum << endl;
    }
};

int main() {
    // Creating an object of the class
    DigitSumCalculator calculator;

    // Calling the methods in sequence
    calculator.inputNumber();
    calculator.calculateSum();
    calculator.displayResult();

    return 0;
}