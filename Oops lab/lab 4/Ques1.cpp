#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    friend Complex addComplex(Complex c1, Complex c2);

    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

Complex addComplex(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex num1(3.5, 2.5);
    Complex num2(1.5, 4.5);
    
    Complex sum = addComplex(num1, num2);
    
    cout << "First Complex Number: ";
    num1.display();
    
    cout << "Second Complex Number: ";
    num2.display();
    
    cout << "Sum: ";
    sum.display();
    
    return 0;
}