#include <iostream>
using namespace std;

class DecimalToBinary {
private:
    int decimalNumber;
    int binaryArray[32];
    int index;

public:
    DecimalToBinary() {
        decimalNumber = 0;
        index = 0;
    }

    void inputNumber() {
        cout << "Enter a decimal number: ";
        cin >> decimalNumber;
    }

    void convertToBinary() {
        int temp = decimalNumber;
        index = 0;
        
        if (temp == 0) {
            binaryArray[index] = 0;
            index++;
            return;
        }

        while (temp > 0) {
            binaryArray[index] = temp % 2;
            temp = temp / 2;
            index++;
        }
    }

    void displayBinary() {
        cout << "Binary equivalent of " << decimalNumber << " is: ";
        for (int i = index - 1; i >= 0; i--) {
            cout << binaryArray[i];
        }
        cout << endl;
    }
};

int main() {
    DecimalToBinary converter;

    converter.inputNumber();
    converter.convertToBinary();
    converter.displayBinary();

    return 0;
}