// Create a class called Musicians to contain three methods string(), wind(), and perc(). Each of these methods should initialize a string array to contain the following instruments
// -  veena, guitar, sitar, sarod and mandolin under string()
// -  flute, clarinet saxophone, nadhaswaram, and piccolo under wind()
// -  tabla, mridangam, bangos, drums and tambour under perc()
// It should also display the contents of the arrays that are initialized. Create a derived class called TypeIns to contain a method called get() and show(). The get() method must display a  menu as follows
// Type of instruments to be displayed
// a.  String instruments
// b.  Wind instruments
// c.  Percussion instruments
// The show() method should display the relevant detail according to our choice. The base class variables must be accessible only to their derived classes.

#include<iostream>
using namespace std;
 
class Musicians{
    protected:
        void String(){
            string str[5]={"veena","guitar","sitar","sarod","mandolin"};
            cout<<"String Instruments:"<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<i+1<<" ."<<str[i]<<endl;
            }
        }
        void wind()
        {
            string Wind[5]={"flute","clarinet","saxophone","nadhaswaram", "piccolo"};
            cout<<"Wind Instruments:"<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<i+1<<" ."<<Wind[i]<<endl;
            }
        }
         void perc()
        {
            string Perc[5]={"tabla","mridangam","bangos", "drums","tambour"};
                cout<<"Percussion Instruments:"<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<i+1<<" ."<<Perc[i]<<endl;
            }
        }
    

};

class TypeIns:public Musicians{
    private:
     char choice;
    public:
        void get()
        {
            cout<<"Enter a choice"<<endl;
            cout<<"1.  String instruments"<<endl;
            cout<<"2.  Wind instruments"<<endl;
            cout<<"3.  Percussion instruments"<<endl;
            cin>>choice;
        }
        void show()
        {
            switch(choice){
                case '1':
                 String();
                 break;
                case '2':
                 wind();
                 break;
                case '3':
                 perc();
                 break;
                default:
                cout<<"incorrect choice";
            }
        }
};

int main()
{
    TypeIns t1;
    t1.get();
    t1.show();
}