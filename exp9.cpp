#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) {
        real = r;
        imag = i;
    }

    Complex operator - (Complex const &obj) {
        return Complex(real - obj.real, imag - obj.imag);
    }

    void print() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 2);
    Complex c2(1, 7);

    Complex result = c1 - c2;
    cout << "Subtraction is : ";
    result.print();

    return 0;
}
