// Write a base class that asks the user to enter a complex number, and make a derived class that adds the complex number of its own to the base. Finally, make a third class that is a friend of derived and calculate the difference between the base complex number and its own complex number.

#include <iostream>
using namespace std;

class BaseComplex {
protected:
    float real, imag;
public:
    BaseComplex() : real(0), imag(0) {}
    BaseComplex(float r, float i) : real(r), imag(i) {}

    void inputComplex() {
        cout << "Enter base complex number (real and imaginary): ";
        cin >> real >> imag;
    }

    void displayComplex() {
        cout << real << " + " << imag << "i";
    }
};

class DerivedComplex : public BaseComplex {
protected:
    float dReal, dImag;
public:
    DerivedComplex() : BaseComplex(), dReal(0), dImag(0) {}

    DerivedComplex(float r, float i, float dr, float di): BaseComplex(r, i), dReal(dr), dImag(di) {}
    void inputDerived() {
        inputComplex();
        cout << "Enter derived complex number (real and imaginary): ";
        cin >> dReal >> dImag;
    }

    BaseComplex operator+() {
        return BaseComplex(real + dReal, imag + dImag);
    }
    friend class FriendComplex;
    float getReal() { return real; }
    float getImg() { return imag; } 

};

class FriendComplex {
private:
    float fReal, fImag;
public:
    FriendComplex() : fReal(0), fImag(0) {}

    void inputFriend() {
        cout << "Enter friend complex number (real and imaginary): ";
        cin >> fReal >> fImag;
    }

    friend BaseComplex operator-(DerivedComplex d, const FriendComplex &f) {
        return BaseComplex(d.getReal() - f.fReal, d.getImg() - f.fImag);
    }
};

int main() {
    DerivedComplex d;
    FriendComplex f;

    // Input the values.
    d.inputDerived();
    f.inputFriend();

    BaseComplex sum = +d; 
    cout << "\nSum (Base + Derived) = ";
    sum.displayComplex();
    cout << endl;

    BaseComplex diff = d - f;  
    cout << "Difference (Base - Friend) = ";
    diff.displayComplex();
    cout << endl;

    return 0;
}
