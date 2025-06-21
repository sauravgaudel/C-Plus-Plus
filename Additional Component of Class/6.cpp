

#include<iostream>

using namespace std;

class concept{
private:
    int serial;
    static int count;
public:
    concept()
    {
        count++;
        serial=count;
        cout<<"Object"<<serial<<" Created"<<endl;
    }
 void showSerial() {
        cout << "Serial Number:" << serial << endl;
    }
    static void total()
    {
        cout<<"Total Objects Created is : "<<count<<endl;
    }

};
int concept::count=0;

int main()
{
    concept c1;
    c1.showSerial();
    concept c2;
    c2.showSerial();
    concept c3;
    c3.showSerial();
    concept c4;
    c4.showSerial();
    concept c5;
    c5.showSerial();

    concept::total();
    return 0;
}
