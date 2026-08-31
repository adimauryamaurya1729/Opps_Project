#include <iostream>
using namespace std;

class ArraySum {
private:
    int* arr;
    int size;
    int sum;

public:
    ArraySum() {
        arr = nullptr;
        size = 0;
        sum = 0;
    }

    ~ArraySum() {
        delete[] arr;
    }

    void inputArray() {
        cout << "Enter the number of elements: ";
        cin >> size;
        
        arr = new int[size];
        
        cout << "Enter the elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void calculateSum() {
        sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
    }

    void displaySum() {
        cout << "The sum of all elements is: " << sum << endl;
    }
};

int main() {
    ArraySum calc;
    
    calc.inputArray();
    calc.calculateSum();
    calc.displaySum();
    
    return 0;
}