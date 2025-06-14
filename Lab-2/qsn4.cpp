#include <iostream>
using namespace std;

// Function that returns a reference to the larger temperature
double& setLarger(double &temp1, double &temp2) {
    if (temp1 > temp2)
        return temp1;
    else
        return temp2;
}

int main() {
    double t1, t2;
    cout << "Enter two temperatures: ";
    cin >> t1 >> t2;

    double newTemp;
    cout << "Enter new temperature value to set for the larger one: ";
    cin >> newTemp;

    setLarger(t1, t2) = newTemp; // Set the larger temperature to newTemp

    cout << "Updated temperatures:\n";
    cout << "Temperature 1: " << t1 << endl;
    cout << "Temperature 2: " << t2 << endl;

    return 0;
}
