#include <iostream>
using namespace std;

class Armstrong {
private:
    int num;

public:
    Armstrong(int n) {
        num = n;
    }

    Armstrong(const Armstrong &obj) {
        num = obj.num;
    }

    int getPower(int base, int exp) {
        int result = 1;
        for (int i = 0; i < exp; i++) {
            result *= base;
        }
        return result;
    }

    bool checkArmstrong() {
        int originalNum = num;
        int temp = num;
        int digits = 0;
        int sum = 0;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        while (temp > 0) {
            int remainder = temp % 10;
            sum += getPower(remainder, digits);
            temp /= 10;
        }

        return sum == originalNum;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Armstrong num1(n);
    
    Armstrong num2 = num1;

    if (num2.checkArmstrong()) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}