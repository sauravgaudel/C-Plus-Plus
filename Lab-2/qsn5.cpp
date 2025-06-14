// Assume that employee will have to pay 10 percent income tax to the government. Ask user to 
//enter the employee salary. Use inline function to display the net payment to the employee by the company.

#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

// Inline function to calculate net payment after 10% tax
inline double netPayment(double salary)
{
    return salary * 0.90; // Deduct 10%
}

int main()
{
    double salary;

    cout << "Enter employee salary: ";
    cin >> salary;

    double Pay = netPayment(salary);

    cout << fixed << setprecision(2);
    cout << "Net payment to employee after 10% tax: Rs." << Pay << endl;

    return 0;
}
