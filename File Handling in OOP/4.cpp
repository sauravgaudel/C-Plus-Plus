// Write a program that stores the information about students (name, student id, department, and address) in a structure and then transfers the information to a file in your directory. Finally, retrieve the information from your file and print it in the proper format on your output screen.

#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[50];
    int id;
    char dept[50];
    char address[100];
};

int main() {
    Student s;

    cout << "Enter student name: "; cin.getline(s.name, 50);
    cout << "Enter student ID: "; cin >> s.id;
    cin.ignore();
    cout << "Enter department: "; cin.getline(s.dept, 50);
    cout << "Enter address: "; cin.getline(s.address, 100);

    // Write to file
    ofstream outFile("student.dat", ios::binary);
    outFile.write((char*)&s, sizeof(s));
    outFile.close();

    // Read from file
    ifstream inFile("student.dat", ios::binary);
    Student s2;
    inFile.read((char*)&s2, sizeof(s2));
    inFile.close();

    cout << "\nRetrieved Student Information:\n";
    cout << "Name: " << s2.name << "\nID: " << s2.id << "\nDept: " << s2.dept << "\nAddress: " << s2.address << endl;

    return 0;
}
