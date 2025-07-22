#include<iostream>
using namespace std;
class compute{
private:
   int value;
public:
    compute()
    {
        cout<<"Enter value ";
        cin>>value;
    }
    bool operator ==(compute);
    bool operator <(compute);
    bool operator >(compute);
    bool operator <=(compute);
    bool operator >=(compute);
    bool operator !=(compute);
};
int main()
{
   compute A,c2;
   cout << "Comparing number 1 and number 2:\n";
    cout << "num1 == num2: " << (A == c2) << endl;
    cout << "num1 != num2: " << (A != c2) << endl;
    cout << "num1 < num2: "  << (A < c2)  << endl;
    cout << "num1 > num2: "  << (A >c2 )  << endl;
    cout << "num1 <= num2: " << (A <=c2) << endl;
    cout << "num1 >= num2: " << (A >=c2) << endl;


}
bool compute::operator ==(compute c2)
{
   return (value==c2.value);
}
bool compute:: operator <(compute c2)
{
return (value<c2.value);
}
bool compute:: operator >(compute c2)
{
return (value>c2.value);
}

bool compute:: operator <=(compute c2)
{
  return (value<=c2.value);
}
bool compute:: operator >=(compute c2)
{
  return (value>=c2.value);
}
bool compute:: operator !=(compute c2)
{
 return (value!=c2.value);
}



