#include <iostream>
using namespace std;

class MatrixProcessor {
private:
    int matrix[3][3];

public:
    void inputMatrix() {
        cout << "Enter the elements of a 3x3 matrix:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> matrix[i][j];
            }
        }
    }

    void displayUpperTriangle() {
        cout << "Upper Triangle of the Matrix:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (j >= i) {
                    cout << matrix[i][j] << "\t";
                } else {
                    cout << "0\t";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    MatrixProcessor mat;
    
    mat.inputMatrix();
    mat.displayUpperTriangle();
    
    return 0;
}