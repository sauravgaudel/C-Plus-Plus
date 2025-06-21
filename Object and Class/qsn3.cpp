// Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data member for the parked time.
//  Make functions to set data members and show the charges and parked hours of the corresponding car id. Make functions for setting and showing 
//  the data members. Member function should be called from other functions.

#include <iostream>
using namespace std;

class carpark {
private:
    int carID;
    int chargePerHour;
    float parkedTime;

public:
 
    void setData(int id, int charge, float time) {
        carID = id;
        chargePerHour = charge;
        parkedTime = time;
    }


    void showData() {
        cout << "Car ID: " << carID << endl;
        cout << "Charge per hour: Rs. " << chargePerHour<< endl;
        cout << "Parked time: " << parkedTime << " hours" << endl;
        cout << "Total Charge: Rs. " << chargePerHour*parkedTime  << endl;
    }

};


void getdata() {
    carpark car;
    int id, charge;
    float time;

    cout << "Enter Car ID: ";
    cin >> id;
    cout << "Enter Charge per hour(Rs.): ";
    cin >> charge;
    cout << "Enter Parked Time (in hours): ";
    cin >> time;

    
    car.setData(id, charge, time);

    
    car.showData();
}

int main() {
    getdata();
    return 0;
}
