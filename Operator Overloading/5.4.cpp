#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;
public:
    Date(int d = 1, int m = 1, int y = 2025)
    {
        day=d;
        month=m;
        year=y;
    }

    void display(){
        cout << day << "/" << month << "/" << year << endl;
    }

    bool LeapYear(int y) {
        if(y%400==0 || (y%4==0 &&y%100!=0))
           {
               return true;
           }
           else{
            return false;
           }
    }

    int noofdays(int m, int y){
        if (m == 2) {
            return LeapYear(y) ? 29 : 28;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11) {
            return 30;
        }
        else {
            return 31;
        }
    }

    void operator++() {
        day++;
        if (day > noofdays(month, year)) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }


    void operator++(int) {
       day++;
        if (day > noofdays(month, year)) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }
};

int main() {
    Date d1(28, 2, 2024);
    cout << "Original Date: ";
    d1.display();

    ++d1;
    cout << "After Prefix ++ : ";
    d1.display();

    Date d2(28, 6, 2025);
    cout << "\nOriginal Date: ";
    d2.display();

    d2++;
    cout << "After Postfix ++ : ";
    d2.display();

    return 0;
}

