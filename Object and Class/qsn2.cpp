// Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly. When it finishes 
// checking a number the program asks if the user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the
//  object-oriented concept.

#include <iostream>
using namespace std;

class PrimeChecker {
private:
    int number;

public:

    void getdata() {
        cout << "Enter a number: ";
        cin >> number;
    }

    
    bool IsPrime() {
        if (number <= 1)
            return false;
        for (int i = 2; i <= number/2; i++) {
            if (number % i == 0)
                return false;
        }
        return true;
    }

    
    void showdata() {
        if (IsPrime()) {
            cout << number << " is a prime number." << endl;
        } else {
            cout << number << " is not a prime number." << endl;
        }
    }
};

int main() {
    char choice;
    do {
        PrimeChecker obj;

        obj.getdata();
        obj.showdata();

        cout << "Do you want to check another number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program terminated." << endl;
    return 0;
}
