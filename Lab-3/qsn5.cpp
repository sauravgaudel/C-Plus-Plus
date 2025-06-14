// Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime in a particular year.
//  Use an array of objects to represent n employees' reports. Write a program that displays the report. Use setpara() member function to set report 
//  attributes by passing the arguments and member function displayreport() to show the report according to the parameter passed. Display the report
//   in the following format.

// An employee with ... ... ... has received Rs ... ... ...as a bonus

// and

// had worked ... ... ... hours as overtime in the year ... ... ...


#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    float bonus;
    float overtime;
    int year;

public:
    
    void setpara(int id, float b, float ot, int y) {
        empID = id;
        bonus = b;
        overtime = ot;
        year = y;
    }

   
    void displayreport() {
        cout << "An employee with ID " << empID 
             << " has received Rs " << bonus << " as a bonus" << endl;
        cout << "and had worked " << overtime 
             << " hours as overtime in the year " << year << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[100]; 

    int id, year;
    float bonus, overtime;

   
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        cout << "Employee ID: ";
        cin >> id;
        cout << "Total Bonus (Rs): ";
        cin >> bonus;
        cout << "Total Overtime (hours): ";
        cin >> overtime;
        cout << "Year: ";
        cin >> year;

        emp[i].setpara(id, bonus, overtime, year);
    }

    // Display reports
    cout << "\n \t\t Employee Reports \n";
    for (int i = 0; i < n; i++) {
        cout << "\nReport for Employee " << i + 1 << ":\n";
        emp[i].displayreport();
    }

    return 0;
}
