#include<iostream>
#include<iomanip>
using namespace std;


class Time{
private:
    int hour;
    int minute;
    int second;
public:
    Time()
    {
        hour=minute=second=0;
    }
    Time(int hour,int minute,int second)
    {
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }

    Time add(Time t)
    {
       Time result;
        result.second = second + t.second;
        result.minute = minute + t.minute + result.second / 60;
        result.second %= 60;

        result.hour = hour + t.hour + result.minute / 60;
        result.minute %= 60;

        result.hour %= 24;
        return result;
    }
    void display24()
    {
        cout<<"Time in 24 hour format :"<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<endl;
    }
    void display12()
    {
        string day="AM";
         if(hour>12)
        {
             day="PM";
        }

        if(hour>12)
        {
            hour=hour%12;
        }


        cout<<"Time in 12 hour format :"<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second <<day<<endl;
    }
};
int main()
{
    Time t1;
    Time t2(17,15,12);
    Time t3(17,1,8);
   Time t4=t2.add(t3);
 cout << "Time 1:\n";
    t1.display24();
    t1.display12();
    cout << "Time 2:\n";
    t2.display24();
    t2.display12();
    cout << "Time 3:\n";
    t3.display24();
    t3.display12();
    cout << "Time 4:\n";
    t4.display24();
    t4.display12();
    return 0;
}

