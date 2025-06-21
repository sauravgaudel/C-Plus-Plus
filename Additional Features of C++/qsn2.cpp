#include <iostream>
using namespace std;

// Function with no argument
void convert() {
    int feet = 1;  // default value
    int inches = feet * 12;
    cout << feet << " foot is " << inches << " inches." << endl;
}

// Function with one argument (feet as int)
void convert(int feet) {
    int inches = feet * 12;
    cout << feet << " feet is " << inches << " inches." << endl;
}

// Function with two arguments (pass by reference for inches)
void convert(int feet, int &inches) {
    inches = feet * 12;
    cout << feet << " feet is " << inches << " inches (using reference)." << endl;
}

int main() {
    // Call function with no argument
    convert();

    // Call function with one argument
    convert(5);

    // Call function with two arguments (pass by reference)
    int inches;
    convert(7, inches);

    return 0;
}
