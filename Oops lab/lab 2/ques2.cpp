#include <iostream>
using namespace std;

class PyramidGenerator {
private:
    int rows;

public:
    PyramidGenerator(int r) {
        rows = r;
    }

    void printPyramid() {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
            cout << endl;
        }
    }
};

int main() {
    PyramidGenerator generator(7);
    
    generator.printPyramid();

    return 0;
}