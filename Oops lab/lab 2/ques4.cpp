#include <iostream>
using namespace std;

class ArrayReverser {
private:
    int* originalArray;
    int* reversedArray;
    int size;

public:
    ArrayReverser() {
        size = 0;
        originalArray = nullptr;
        reversedArray = nullptr;
    }

    ~ArrayReverser() {
        delete[] originalArray;
        delete[] reversedArray;
    }

    void inputArray() {
        cout << "Enter the number of elements: ";
        cin >> size;
        
        originalArray = new int[size];
        reversedArray = new int[size];
        
        cout << "Enter the elements of the array:\n";
        for (int i = 0; i < size; i++) {
            cin >> originalArray[i];
        }
    }

    void copyReversed() {
        for (int i = 0; i < size; i++) {
            reversedArray[i] = originalArray[size - 1 - i];
        }
    }

    void displayArrays() {
        cout << "Original Array: ";
        for (int i = 0; i < size; i++) {
            cout << originalArray[i] << " ";
        }
        cout << "\nReversed Array: ";
        for (int i = 0; i < size; i++) {
            cout << reversedArray[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayReverser reverser;
    
    reverser.inputArray();
    reverser.copyReversed();
    reverser.displayArrays();
    
    return 0;
}