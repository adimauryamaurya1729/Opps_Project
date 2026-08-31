#include <iostream>
using namespace std;

class NumberReverser {
private:
    int originalNumber;
    int reversedNumber;

public:
    NumberReverser() {
        originalNumber = 0;
        reversedNumber = 0;
    }

    void inputNumber() {
        cout << "Enter an integer to reverse: ";
        cin >> originalNumber;
    }

    void calculateReverse() {
        int temp = originalNumber;
        reversedNumber = 0;

        do {
            int lastDigit = temp % 10;
            reversedNumber = (reversedNumber * 10) + lastDigit;
            temp /= 10;
        } while (temp != 0); 
    }

    void displayResult() {
        cout << "The reverse of " << originalNumber << " is: " << reversedNumber << endl;
    }
};

int main() {
    NumberReverser reverser;

    reverser.inputNumber();
    reverser.calculateReverse();
    reverser.displayResult();

    return 0;
}