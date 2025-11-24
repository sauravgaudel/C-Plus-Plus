// Write a program to overload stream operators to read a complex number and display the complex number in a+ib format.
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex() : real(0), imag(0) {}

   
    friend istream& operator>>(istream& in, Complex& c) {
        cout << "Enter real part: ";
        in >> c.real;
        cout << "Enter imaginary part: ";
        in >> c.imag;
        return in;
    }


    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real;
        if (c.imag >= 0)
            out << "+i" << c.imag;
        else
            out << "-i" << -c.imag;
        return out;
    }
};

int main() {
    Complex c;
    cin >> c;
    cout << "Complex number: " << c << endl;
    return 0;
}
