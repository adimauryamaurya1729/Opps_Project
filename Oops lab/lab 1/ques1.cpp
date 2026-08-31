#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    double area;
    double circumference;
    const double PI = 3.14159; 

public:
    void inputRadius() {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    void calculateArea() {
        area = PI * radius * radius;
    }

    void calculateCircumference() {
        circumference = 2 * PI * radius;
    }

    void displayResults() {
        cout << "Area of the circle: " << area << endl;
        cout << "Circumference of the circle: " << circumference << endl;
    }
};

int main() {
    Circle myCircle;

    myCircle.inputRadius();
    myCircle.calculateArea();
    myCircle.calculateCircumference();
    myCircle.displayResults();

    return 0;
}