// Write three derived classes inheriting functionality of base class person (should have a member function that asks to enter name and age) and with added unique features of student, and employee, and functionality to set properties of student and employee objects. And make one member function for printing the address of the objects of classes (base and derived) using this pointer. Create two objects of the base class and the derived classes each and print the addresses of individual objects. Using a calculator, calculate the address space occupied by each object and verify this with address spaces printed by the program.

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void printAddress() {
        cout << "Address of Person object: " << this << endl;
    }
};

class Student : public Person {
private:
    int rollNo;

public:
    void setStudent() {
        Person::input();
        cout<<"Enter Roll no:";
        cin>>rollNo;
    }
    void printAddress() {
        cout << "Address of Student object: " << this << endl;
    }
};

class Employee : public Person {
private:
    int empId;

public:
    void setEmployee() {
        cout<<"Enter Emp id:";
        cin>>empId;
    }

    void printAddress() {
        cout << "Address of Employee object: " << this << endl;
    }
};

class AnotherDerived : public Person {
private:
    string hobby;

public:
    void setHobby() {
        Person::input();
     cout<<"Enter hobby:";
        cin>>hobby;
    }

    void printAddress() {
        cout << "Address of AnotherDerived object: " << this << endl;
    }
};

int main() {
    // Base class objects
    Person p1, p2;
    p1.input();
    p2.input();

    // Derived class objects
    Student s1, s2;
     s1.setStudent();
     s2.setStudent();

    Employee e1, e2;
    e1.input();
    e1.setEmployee();
    e2.input(); 
    e2.setEmployee();

    AnotherDerived a1, a2;
     a1.setHobby();
     a2.setHobby();

    cout << "\n--- Object Addresses ---\n";
    p1.printAddress();
    p2.printAddress();
    s1.printAddress();
    s2.printAddress();
    e1.printAddress();
    e2.printAddress();
    a1.printAddress();
    a2.printAddress();

    cout << "\n--- Object Sizes (in bytes) ---\n";
    cout << "Size of Person: " << sizeof(Person) << endl;
    cout << "Size of Student: " << sizeof(Student) << endl;
    cout << "Size of Employee: " << sizeof(Employee) << endl;
    cout << "Size of AnotherDerived: " << sizeof(AnotherDerived) << endl;

    return 0;
}
