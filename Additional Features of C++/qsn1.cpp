#include <iostream>
#include <iomanip>  // For setw and setfill

using namespace std;

struct Date {
    int month;
    int day;
    int year;
};

void printDate(Date d) {
    cout << setfill('0') << setw(2) << d.month << "/"
         << setw(2) << d.day << "/"
         << setw(4) << d.year << endl;
}

int main() {
    Date today;
    today.month = 5;
    today.day = 31;
    today.year = 2025;

    printDate(today);

    return 0;
}