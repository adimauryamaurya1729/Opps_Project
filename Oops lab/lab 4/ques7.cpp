#include <iostream>
using namespace std;

class ArrayProcessor {
private:
    int* arr;
    int size;

public:
    ArrayProcessor(int s) {
        size = s;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    ~ArrayProcessor() {
        delete[] arr;
    }

    friend int calculateSum(ArrayProcessor* ptr);
};

int calculateSum(ArrayProcessor* ptr) {
    int sum = 0;
    for (int i = 0; i < ptr->size; i++) {
        sum += ptr->arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    cout << "Enter " << n << " elements: ";
    ArrayProcessor* objPtr = new ArrayProcessor(n);
    
    int totalSum = calculateSum(objPtr);
    
    cout << "Sum of array elements: " << totalSum << endl;
    
    delete objPtr;
    return 0;
}