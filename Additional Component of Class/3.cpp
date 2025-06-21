#include <iostream>
#include <string>
using namespace std;

class Department {
private:
    int deptID;
    string deptName;
    int objnum;
    static int count;

public:
    Department(int id, string name) {
        deptID = id;
        deptName = name;
        objnum= ++count;
        cout << "Constructor called for Object " << objnum  << ": "
             << deptName << " (" << deptID << ")" << endl;
    }
    ~Department() {
        cout << "Destructor called: Object " << objnum << " goes out of the scope." << endl;
    }
};
int Department::count = 0;

int main() {
    {
        Department d1(7910001, "Computer");
        Department d2(7910002, "Electrical");
        {
            Department d3(7910003, "Mechanical");
        }
        Department d4(7910004, "Civil");
    }
    return 0;
}

