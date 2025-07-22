#include<iostream>
using namespace std;

class B;
class C;
class A{
private:
    int x,y;
public:
    A(int x=0,int y=0)
    {
        this->x=x;
        this->y=y;
    }
    void add(B);
    void multiply(B b);
    void subtract(B b);
    void divide(B b);
    friend class C;

};
class B{
private:
    int x,y;
public:
     B(int x=0,int y=0)
    {
        this->x=x;
        this->y=y;
    }
    friend void A::add(B);
   int getX() const { return x; }
    int getY() const { return y; }


};
class C{
public:
    showdata(A obj)
    {
        cout<<"X of class A= "<<obj.x<<" Y of class B= "<<obj.y<<endl;
    }

};
 void A ::add(B obje)
    {
        cout<<"Additon:("<<x+obje.x<<","<<y+obje.y<<")"<<endl;

    }
void A::multiply(B b) {
    cout << "Multiplication: (" << x * b.getX() << ", " << y * b.getY() << ")" << endl;
}

void A::subtract(B b) {
    cout << "Subtraction: (" << x - b.getX() << ", " << y - b.getY() << ")" << endl;
}

void A::divide(B b) {
    cout << "Division: (";
    if (b.getX() != 0)
        cout << x / b.getX();
    else
        cout << "undefined";
    cout << ", ";
    if (b.getY() != 0)
        cout << y / b.getY();
    else
        cout << "undefined";
    cout << ")" << endl;
}

int main()
{
    A a(1,2);
    B b(4,5);
    C c;
    a.add(b);
    a.multiply(b);
    a.subtract(b);
    a.divide(b);
    c.showdata(a);

}
