#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[3][3];
    int rows;
    int cols;

public:
    Matrix(int r = 3, int c = 3) {
        rows = r;
        cols = c;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                mat[i][j] = 0;
            }
        }
    }

    void setElements(int arr[3][3]) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                mat[i][j] = arr[i][j];
            }
        }
    }

    friend Matrix addMatrix(Matrix m1, Matrix m2);

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

Matrix addMatrix(Matrix m1, Matrix m2) {
    Matrix temp(m1.rows, m1.cols);
    for (int i = 0; i < m1.rows; i++) {
        for (int j = 0; j < m1.cols; j++) {
            temp.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
        }
    }
    return temp;
}

int main() {
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    
    Matrix m1(3, 3);
    m1.setElements(arr1);
    
    Matrix m2(3, 3);
    m2.setElements(arr2);
    
    Matrix sum = addMatrix(m1, m2);
    
    cout << "First Matrix:" << endl;
    m1.display();
    
    cout << "Second Matrix:" << endl;
    m2.display();
    
    cout << "Sum Matrix:" << endl;
    sum.display();
    
    return 0;
}