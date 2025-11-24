#include <iostream>
#include <typeinfo>
using namespace std;

// Polymorphic base class
class Vehicle {
public:
    virtual void display() {
     cout << "This is a Vehicle.\n";
    }
};

// Derived class: Bus
class Bus : public Vehicle {
public:
    void display()  {
        cout << "This is a Bus.\n";
    }
    void busOnlyFunction() {
        cout << "Bus-specific function.\n";
    }
};

// Derived class: Car
class Car : public Vehicle {
public:
    void display()  {
        cout << "This is a Car.\n";
    }
    void carOnlyFunction() {
        cout << "Car-specific function.\n";
    }
};

// Derived class: Bike
class Bike : public Vehicle {
public:
    void display() {
        cout << "This is a Bike.\n";
    }
    void bikeOnlyFunction() {
        cout << "Bike-specific function.\n";
    }
};

int main() {
   
    Bus b1;Car c1; Bike bike1;
     Vehicle* v[]={&b1,&c1,&bike1};

    for (int i = 0; i < 3;i++) {
        cout << "Object " << i + 1 << ": ";
        v[i]->display();
        cout << "Type is: " << typeid(*v[i]).name() << endl;
        if (Bus* b = dynamic_cast<Bus*>(v[i])) {
            b->busOnlyFunction();
        } else if (Car* c = dynamic_cast<Car*>(v[i])) {
            c->carOnlyFunction();
        } else if (Bike* bk = dynamic_cast<Bike*>(v[i])) {
            bk->bikeOnlyFunction();
        }
        cout << "\n";
    }
    return 0;
}
