#include<iostream>
using namespace std;
class coordinate{
private:
    float x;
    float y;
    float z;
public:
    void setdata()
    {
        cout<<"Enter x,y and z coordinate";
        cin>>x>>y>>z;
    }
    void getdata()
    {
        cout<<"x:"<<x<<"\t"<<"y:"<<y<<"\t"<<"z"<<z<<endl;
    }
    friend coordinate operator +(coordinate,coordinate);
    friend coordinate operator -(coordinate,coordinate);
};
int main()
{
   coordinate A;
   coordinate c2;
   A.setdata();
   c2.setdata();
   coordinate c3=A+c2;
   coordinate c4=A-c2;
   c3.getdata();
   c4.getdata();
   return 0;
}
coordinate operator +(coordinate A, coordinate c2)
{
  coordinate c3;
  c3.x=A.x+c2.x;
  c3.y=A.y+c2.y;
  c3.z=A.z+c2.z;
  return c3;
}
coordinate operator -(coordinate A, coordinate c2)
{
    coordinate c3;
  c3.x=A.x-c2.x;
  c3.y=A.y-c2.y;
  c3.z=A.z-c2.z;
  return c3;
}
