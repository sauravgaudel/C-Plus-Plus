#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Account {
    int accNo = 0;
    char lastName[20]{};
    char firstName[20]{};
    double balance = 0.0;

public:
    int getAccNo() const { return accNo; }
    void input() {
        cout << "Account Number (1-100): "; cin >> accNo; cin.ignore();
        cout << "Last Name: "; cin.getline(lastName, 20);
        cout << "First Name: "; cin.getline(firstName, 20);
        cout << "Balance: "; cin >> balance; cin.ignore();
    }
    void display() const {
        if(accNo)
            cout << accNo << "\t" << lastName << "\t" << firstName << "\t" << balance << "\n";
    }
    void update() {
        cout << "Update Last Name (" << lastName << "): "; cin.getline(lastName, 20);
        cout << "Update First Name (" << firstName << "): "; cin.getline(firstName, 20);
        cout << "Update Balance (" << balance << "): "; cin >> balance; cin.ignore();
    }
    void markDeleted() { accNo = 0; }
};

streampos pos(int accNo) { return (accNo - 1) * sizeof(Account); }

void addAccount(fstream& file) {
    Account acc; acc.input();
    if(acc.getAccNo() < 1 || acc.getAccNo() > 100) {
        cout << "Invalid account number.\n"; return;
    }
    file.seekg(pos(acc.getAccNo()));
    Account existing;
    file.read(reinterpret_cast<char*>(&existing), sizeof(existing));
    if(existing.getAccNo() != 0) {
        cout << "Account exists.\n"; return;
    }
    file.clear();
    file.seekp(pos(acc.getAccNo()));
    file.write(reinterpret_cast<char*>(&acc), sizeof(acc));
    cout << "Account added.\n";
}

void updateAccount(fstream& file) {
    int accNo; cout << "Enter account number to update: "; cin >> accNo; cin.ignore();
    if(accNo < 1 || accNo > 100) {
        cout << "Invalid account number.\n"; return;
    }
    file.seekg(pos(accNo));
    Account acc;
    file.read(reinterpret_cast<char*>(&acc), sizeof(acc));
    if(acc.getAccNo() == 0) {
        cout << "Account not found.\n"; return;
    }
    acc.display();
    cout << "Enter new details:\n";
    acc.update();
    file.clear();
    file.seekp(pos(accNo));
    file.write(reinterpret_cast<char*>(&acc), sizeof(acc));
    cout << "Account updated.\n";
}

void deleteAccount(fstream& file) {
    int accNo; cout << "Enter account number to delete: "; cin >> accNo; cin.ignore();
    if(accNo < 1 || accNo > 100) {
        cout << "Invalid account number.\n"; return;
    }
    file.seekg(pos(accNo));
    Account acc;
    file.read(reinterpret_cast<char*>(&acc), sizeof(acc));
    if(acc.getAccNo() == 0) {
        cout << "Account not found.\n"; return;
    }
    acc.markDeleted();
    file.clear();
    file.seekp(pos(accNo));
    file.write(reinterpret_cast<char*>(&acc), sizeof(acc));
    cout << "Account deleted.\n";
}

void displayAccounts(fstream& file) {
    file.seekg(0);
    Account acc;
    cout << "AccNo\tLastName\tFirstName\tBalance\n";
    cout << "-----------------------------------------\n";
    for(int i = 0; i < 100; i++) {
        file.read(reinterpret_cast<char*>(&acc), sizeof(acc));
        if(acc.getAccNo() != 0) acc.display();
    }
}

int main() {
    fstream file("accounts.dat", ios::in | ios::out | ios::binary);
    if(!file) {
        file.open("accounts.dat", ios::out | ios::binary);
        Account blank;
        for(int i = 0; i < 100; i++) file.write(reinterpret_cast<char*>(&blank), sizeof(blank));
        file.close();
        file.open("accounts.dat", ios::in | ios::out | ios::binary);
    }

    int choice;
    do {
        cout << "\n1.Add\n2.Update\n3.Delete\n4.Display\n5.Exit\nChoice: ";
        cin >> choice; cin.ignore();

        switch(choice) {
            case 1: addAccount(file); break;
            case 2: updateAccount(file); break;
            case 3: deleteAccount(file); break;
            case 4: displayAccounts(file); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while(choice != 5);

    file.close();
    return 0;
}
