#include <iostream>
using namespace std;

class charge {
private:
    int num_vehicle;
    int hour;
    float rate;
    float total;

public:
    charge(int v, int h, float r)
    {
        num_vehicle = v;
        hour = h;
        rate = r;
    }
    float totalcharge()
    {
        total = num_vehicle * hour * rate;
        if (num_vehicle > 10)
        {
            total *= 0.9;
        }
        return total;
    }

    charge(const charge &vehicle) {
        num_vehicle = vehicle.num_vehicle;
        hour = vehicle.hour;
        rate = vehicle.rate;
    }

    void display()
    {
        cout << "Number of Vehicles: " << num_vehicle << endl;
        cout << "Hour(s) Parked: " << hour << endl;
        cout << "Rate per Hour: $" << rate << endl;
        cout << "Total Charge: $" << totalcharge() << endl << endl;
    }
};

int main() {
    charge v1(12, 2, 50);
    v1.display();
    cout<<"Creating Copy COnstructor"<<endl;
    charge v2(v1);
    v2.display();

    return 0;
}

