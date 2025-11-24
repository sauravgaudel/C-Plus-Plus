// Create a class Person and two derived classes Employee and Student, inherited from class Person. Now create a class Manager which is derived from two base classes Employee and Student. Show the use of the virtual base class.

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void setPersonData(string n, int a) {
        name = n;
        age = a;
    }

    void showPersonData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : virtual public Person {
protected:
    int empID;
public:
    void setEmployeeData(int id) {
        empID = id;
    }

    void showEmployeeData(){
        cout << "Employee ID: " << empID << endl;
    }
};

class Student : virtual public Person {
protected:
    int rollNo;
public:
    void setStudentData(int r) {
        rollNo = r;
    }

    void showStudentData(){
        cout << "Roll No: " << rollNo << endl;
    }
};

class Manager : public Employee, public Student {
private:
    string dept;
public:
    void setManagerData(string n, int a, int id, int r, string d) {
        setPersonData(n, a);     
        setEmployeeData(id);
        setStudentData(r);
        dept = d;
    }

    void showManagerData() {
        showPersonData();
        showEmployeeData();
        showStudentData();
        cout << "Department: " << dept << endl;
    }
};
int main() {
    Manager m;
    m.setManagerData("Yogendra", 21, 101, 202, "Engineering");
    m.showManagerData();
    return 0;
}
