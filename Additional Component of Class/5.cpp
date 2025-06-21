
#include <iostream>
using namespace std;

class check {
private:
    int value;
public:
    check(int value)
    {
        this->value=value;
    }

    // Non-const member function
    void setValue(int value) {
       this-> value = value;
        cout << "Non-const member function called. Value set to " << value << endl;
    }

    // Const member function
    void showValue() const {
        cout << "Const member function called. Value = " << value << endl;
    }
};

int main() {
    // i) const_object.non_const_mem_function
    const check d1(10);
    // d1.setValue(20); //const object cannot call non-const member function

    // ii) const_object.const_mem_function
    d1.showValue(); //  const object can call const member function function

    // iii) non_const_object.non_const_mem_function
    check d2(30);
    d2.setValue(50); //  non-const object can call non-const member function function


    // iv) non_const_object.const_mem_function
    d2.showValue(); //  non-const object can call const member function function

    return 0;
}
