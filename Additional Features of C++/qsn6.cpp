// Write a program that displays the current monthly salary of chief executive officer, information officer,
//  and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 
// 2010. Let us assume that the salaries in year 2009 are

// Chief executive officer Rs. 35000/m

// Information officer Rs. 25000/m

// System analyst Rs. 24000/m

// Programmer Rs. 18000/m

// Make a function that takes two arguments; one salary and the other increment. Use proper default argument.

#include <iostream>
#include <iomanip>  // For std::setprecision

using namespace std;

// Function to calculate increased salary
double increasedSalary(int salary, int increment) {
    return salary + (salary * increment / 100);
}

int main() {

    int SalaryCEO = 35000;
    int SalaryInfoOfficer = 25000;
    int SalarySA = 24000;
    int SalaryProgrammer = 18000;

    int inc_CEO = 9;
    int inc_InfoOfficer = 10;
    int inc_SA = 12;
    int inc_Programmer = 12;

    // Calculate increased salaries
    double newSalaryCEO = increasedSalary(SalaryCEO, inc_CEO);
    double newSalaryInfoOfficer = increasedSalary(SalaryInfoOfficer, inc_InfoOfficer);
    double newSalarySA = increasedSalary(SalarySA, inc_SA);
    double newSalaryProgrammer = increasedSalary(SalaryProgrammer, inc_Programmer);

    // Display the results
    cout << fixed << setprecision(2);
    cout << "Salaries in 2010 after increments:" << endl;
    cout << "Chief Executive Officer: Rs. " << newSalaryCEO << "/m" << endl;
    cout << "Information Officer: Rs. " << newSalaryInfoOfficer << "/m" << endl;
    cout << "System Analyst: Rs. " << newSalarySA << "/m" << endl;
    cout << "Programmer: Rs. " << newSalaryProgrammer << "/m" << endl;

    return 0;
}
