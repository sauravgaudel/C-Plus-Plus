#include <iostream>
#include <iomanip>
using namespace std;

class FormatManipulator {
    int width;
    int precision;
    char fillChar;

public:
    FormatManipulator(int w, int p, char f)
        : width(w), precision(p), fillChar(f) {}

    friend ostream& operator<<(ostream& os, const FormatManipulator& fm) {
        os.width(fm.width);
        os.precision(fm.precision);
        os.fill(fm.fillChar);
        os.setf(ios::fixed);  
        return os;
    }
};

FormatManipulator formatOut(int width, int precision, char fillChar) {
    return FormatManipulator(width, precision, fillChar);
}

int main() {
    double num1 = 123.45678;
    double num2 = 5.6;
    cout << "Formatted Output using User-defined Manipulator:\n";
    cout << formatOut(10, 3, '*') << num1 << endl;
    cout << formatOut(12, 2, '#') << num2 << endl;

    return 0;
}
