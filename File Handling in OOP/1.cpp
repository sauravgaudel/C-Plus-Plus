#include <iostream>
#include <string>
using namespace std;

int main() {
    const int numItems = 3;
    string itemNames[] = {"Shampoo", "Toothpaste", "Soap"};
    float prices[] = {199.50, 120.75, 45.25};
    int quantities[] = {2, 1, 4};
    float grandTotal = 0;

 
    cout.fill('=');
    cout.width(60);
    cout << "=" << endl;


    cout.fill(' ');
    cout.setf(ios::left);
    cout.width(20); cout << "Item Name";
    cout.setf(ios::right);
    cout.width(10); cout << "Price";
    cout.width(10); cout << "Qty";
    cout.width(15); cout << "Total" << endl;

    cout.fill('-');
    cout.width(60);
    cout << "-" << endl;
    cout.fill(' ');
    cout.setf(ios::fixed);
    cout.precision(2);
    for (int i = 0; i < numItems; ++i) {
        float total = prices[i] * quantities[i];
        grandTotal += total;
        cout.unsetf(ios::left);
        cout.width(20); cout << itemNames[i];
        cout.setf(ios::right);
        cout.width(10); cout << prices[i];
        cout.width(10); cout << quantities[i];
        cout.width(15); cout << total << endl;
    }

    cout.fill('=');
    cout.width(60);
    cout << "=" << endl;
    cout.fill(' ');

    cout.setf(ios::left);
    cout.width(40); cout << "Grand Total:";
    cout.setf(ios::right);
    cout.width(15); cout << grandTotal << endl;


    cout << "\n\n--- Demonstrating ios flags ---" << endl;
    cout.setf(ios::boolalpha);
    cout << "In Stock: " << true << endl;
    cout.setf(ios::showpos);
    cout << "Positive Balance: " << 250 << endl;
    cout.unsetf(ios::showpos);
    cout << "Negative Balance: " << -150 << endl;

    return 0;
}
