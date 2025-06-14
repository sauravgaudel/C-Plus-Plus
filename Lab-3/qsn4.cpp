// Write a program with classes to represent a circle, rectangle, and triangle. Each class should have data members to represent the actual objects 
// and member functions to read and display objects, find perimeter and area of the objects, and other useful functions. Use the classes to create 
// objects in your program.

#include <iostream>
#include <cmath>
using namespace std;


class Circle {
private:
    float radius;

public:
    void getdata() {
        cout << "Enter radius of the circle: ";
        cin >> radius;
    }

    void showdata() {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }

    float area() {
        return 3.14159f * radius * radius;
    }

    float perimeter() {
        return 2 * 3.14159f * radius;
    }
};


class Rectangle {
private:
    float length, width;

public:
    void getdata() {
        cout << "\nEnter length and width of the rectangle: ";
        cin >> length >> width;
    }

    void showdata() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }

    float area() {
        return length * width;
    }

    float perimeter() {
        return 2 * (length + width);
    }
};


class Triangle {
private:
    float a, b, c; 

public:
    void getdata() {
        cout << "\nEnter the three sides of the triangle: ";
        cin >> a >> b >> c;
        if (!valid()) {
            cout << "Invalid triangle sides. Try again.\n";
            getdata();
        }
    }

    void showdata() {
        cout << "Sides: a=" << a << ", b=" << b << ", c=" << c << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }

    float perimeter() {
        return a + b + c;
    }

    float area() {
        float s = perimeter() / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    bool valid() {
        return (a + b > c && a + c > b && b + c > a);
    }
};


int main() {
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    cout << "\n\t\t Circle \n";
    circle.getdata();
    circle.showdata();

    cout << "\n \t\t Rectangle\n";
    rectangle.getdata();
    rectangle.showdata();

    cout << "\n \t\t  Triangle \n";
    triangle.getdata();
    triangle.showdata();

    return 0;
}
