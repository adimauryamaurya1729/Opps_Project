#include <iostream>
using namespace std;

class Reverser {
public:
    int reverseNumber(int num) {
        int reversed = 0;
        
        while (num != 0) {
            int remainder = num % 10;
            reversed = (reversed * 10) + remainder;
            num /= 10;
        }
        
        return reversed;
    }
};

int main() {
    Reverser revObj;
    int number;
    int reversedNumber;

    cout << "Enter a number to reverse: ";
    cin >> number;

    reversedNumber = revObj.reverseNumber(number);

    cout << "The reverse of " << number << " is: " << reversedNumber << endl;

    return 0;
}