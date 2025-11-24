// Write a program with an abstract class Student and create derive classes Engineering, Medicine and Science from base class Student. Create the objects of the derived classes and process them and access them using an array of pointers of type base class Student.

#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
public:
    void setData(const string& n, int r) {
        name = n;
        rollNo = r;
    }
    virtual void display()= 0;
};

// Derived class: Engineering
class Engineering : public Student {
private:
    string branch;
public:
    void setBranch(const string& b) {
        branch = b;
    }

    void display() {
        cout << "Engineering Student\n";
        cout << "Name: " << name << ", Roll No: " << rollNo << ", Branch: " << branch << "\n";
    }
};

class Medicine : public Student {
private:
    string specialization;
public:
    void setSpecialization(const string& s) {
        specialization = s;
    }

    void display(){
        cout << "Medicine Student\n";
        cout << "Name: " << name << ", Roll No: " << rollNo << ", Specialization: " << specialization << "\n";
    }
};

class Science : public Student {
private:
    string field;
public:
    void setField(const string& f) {
        field = f;
    }

    void display(){
        cout << "Science Student\n";
        cout << "Name: " << name << ", Roll No: " << rollNo << ", Field: " << field << "\n";
    }
};

int main() {
Engineering e1;
    e1.setData("Yogendra", 101);
    e1.setBranch("Computer");

    Medicine m1;
    m1.setData("Ritesh", 102);
    m1.setSpecialization("Cardiology");

    Science s1;
    s1.setData("Raj", 103);
    s1.setField("Physics");
   Student* students[]={&e1,&m1,&s1};


    cout << "Student Information:";
    for (int i = 0; i < 3; ++i) {
        students[i]->display();
      
    }
    return 0;
}
