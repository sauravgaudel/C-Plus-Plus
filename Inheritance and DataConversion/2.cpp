// Write two classes to store distances in meter-centimeter and feet-inch systems respectively. Write conversions functions so that the program can convert objects of both types.

#include<iostream>
#include<iomanip>
using namespace std;

class mcSystem{
    private:
        float meter;
        float centimeter;
    public:
    mcSystem():meter(0),centimeter(0){}
    mcSystem(float m,float cm)
    {
        meter=m;
        centimeter=cm;
    }
    float return_meter(){return meter;}
     float return_centimeter(){return centimeter;}

     void getvalue()
    {
        cout << fixed << setprecision(2);
        cout<<"Meter: "<<meter<<endl;
        cout<<"Centimeter: "<<centimeter<<endl;
    }
    void putvalue()
    {
        cout<<"Enter the meter: ";
        cin>>meter;
        cout<<"Enter the centimeter: ";
        cin>>centimeter;
    }
};
class fiSystem{
    private:
        float feet;
        float inch;
    public:
    fiSystem():feet(0),inch(0){}
    fiSystem(float f,float in)
    {
        feet=f;
        inch=in;
    }
    fiSystem(mcSystem m1)
    {
        float mc=m1.return_meter()+(m1.return_centimeter()/100);
        float total_inches = mc * 39.3701;
        feet = (int)(total_inches / 12);
        inch = (int)(total_inches) % 12;
    }
    operator mcSystem()
    {
    float total_meters = (feet * 0.3048f) + (inch * 0.0254f);
    int meter = (int)total_meters;
    int centimeter = (int)((total_meters - meter) * 100 + 0.5); 
    return mcSystem(meter,centimeter);
    }
    void getvalue()
    {
        cout << fixed << setprecision(2);
        cout<<"Inch: "<<inch<<endl;
        cout<<"Feet: "<<feet<<endl;
    }
     void putvalue()
    {
        cout<<"Enter the feet: ";
        cin>>feet;
        cout<<"Enter the inch: ";
        cin>>inch;
    }
};

int main()
{
    mcSystem mc1,mc2;
    fiSystem fi1,fi2;
    mc1.putvalue();
    fi1=mc1;
    fi1.getvalue();
    fi2.putvalue();
    mc2=fi2;
    mc2.getvalue();
    return 0;
}