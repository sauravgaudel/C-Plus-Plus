// Write a program to create a class shape with functions to find the area of the shapes and display the names of the shapes and other essential components of the class. Create derived classes circle, rectangle, and trapezoid each having overriding functions area() and display(). Write a suitable program to illustrate virtual functions and virtual destructors.

#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
    virtual void display()= 0;
     virtual ~Shape() {
        cout << "Shape's destructor called\n";
    }
};
class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r)
    {
        radius=r;
    }

    float area() {
        return 3.14* radius * radius;
    }

    void display(){
        cout << "Shape: Circle\n";
        cout << "Radius: " << radius << "\n";
        cout << "Area: " << area() << "\n";
    }

    ~Circle() {
        cout << "Circle destructor called\n";
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    float length, breadth;

public:
    Rectangle(float l, float b) : length(l), breadth(b) {}

    float area() {
        return length * breadth;
    }

    void display(){
        cout << "Shape: Rectangle\n";
        cout << "Length: " << length << ", breath: " << breadth << "\n";
        cout << "Area: " << area() << "\n";
    }

    ~Rectangle() {
        cout << "Rectangle destructor called\n";
    }
};

class Trapezoid : public Shape {
private:
    float b1, b2, height;

public:
    Trapezoid(float b1, float b2, float height) 
    {
        this->b1=b1;
        this->b2=b2;
        this->height=height;
    } 

    float area(){
        return 0.5 * (b1 + b2) * height;
    }

    void display(){
        cout << "Shape: Trapezoid\n";
        cout << "Base1: " << b1 << ", Base2: " << b2 << ", Height: " << height << "\n";
        cout << "Area: " << area() << "\n";
    }

    ~Trapezoid() {
        cout << "Trapezoid destructor called\n";
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Circle(2);
    shapes[1] = new Rectangle(2,3);
    shapes[2] = new Trapezoid(3, 4,5);

    for (int i = 0; i <3;i++) {
        shapes[i]->display();
        cout<<endl;
    }
    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }

    return 0;
}
