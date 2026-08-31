#include <iostream>
using namespace std;

class PalindromeChecker {
private:
    int number;
    int reversedNumber;

public:
    PalindromeChecker() {
        number = 0;
        reversedNumber = 0;
    }

    void inputNumber() {
        cout << "Enter an integer to check: ";
        cin >> number;
    }

    void checkPalindrome() {
        int temp = number;
        reversedNumber = 0;

        while (temp != 0) {
            int lastDigit = temp % 10;
            reversedNumber = (reversedNumber * 10) + lastDigit;
            temp /= 10;
        }
    }

    void displayResult() {
        if (number == reversedNumber) {
            cout << number << " is a palindrome number." << endl;
        } else {
            cout << number << " is not a palindrome number." << endl;
        }
    }
};

int main() {
    PalindromeChecker checker;

    checker.inputNumber();
    checker.checkPalindrome();
    checker.displayResult();

    return 0;
}