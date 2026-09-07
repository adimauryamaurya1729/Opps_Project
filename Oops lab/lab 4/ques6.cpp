#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int breadth;
    int height;

public:
    Box() {
        length = 0;
        breadth = 0;
        height = 0;
    }

    Box(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }

    Box(const Box &obj) {
        length = obj.length;
        breadth = obj.breadth;
        height = obj.height;
    }

    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth << ", Height: " << height << endl;
    }
};

int main() {
    Box b1;
    
    Box b2(10, 5, 8);
    
    Box b3 = b2;
    
    cout << "Default Constructor: ";
    b1.display();
    
    cout << "Parameterized Constructor: ";
    b2.display();
    
    cout << "Copy Constructor: ";
    b3.display();

    return 0;
}