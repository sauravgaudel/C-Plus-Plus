// Write a program that can convert the Distance (meter, centimeter) to meters measurement in float and vice versa. Make a class distance with two data members, meter and centimeter. You can add function members as per your requirement.


#include<iostream>
#include<iomanip>
using namespace std;

class Distance{
    private:
     float meter;
     float centimeter;
    public:
    Distance()
    {
        meter=0;
        centimeter=0;
    }
    Distance(float meter,float centimeter)
    {
        this->meter=meter;
        this->centimeter=centimeter;
    }
    Distance(float m)
    {
        meter=(int)m;
        centimeter=(m-int(m))*100;
    }
    operator float(){
        float m;
        m=meter+((float)centimeter/100);
        return m;
    }
    void getvalue()
    {
          cout << fixed << setprecision(2);
        cout<<"Meter: "<<meter<<endl;
        cout<<"Centimeter: "<<centimeter<<endl;
    }
};
int main()
{
    Distance d1;
    float distance=5.6;
    d1=distance;
    d1.getvalue();
    d1=Distance(5,100);
    float distance1=d1;
    cout<<"The distance in meter is :"<< distance1;
    return 0;
}
