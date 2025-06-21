#include<iostream>
#include<cstring>

using namespace std;

class arr{
private:
    char *a;
public:
    arr(const char *a)
    {
        this->a= new char[50];
        strcpy(this->a,a);
    }
    void stringconcat(const arr &char2)
    {
        int i,l;
        for(i=0,l=strlen(a);i<(strlen(a)+strlen(char2.a));i++,l++)
        {
            a[l]=char2.a[i];
        }
        a[i]='\0';
    }
    void display()
    {
        cout<<"Characters after concatenation is :"<<a;
    }

    ~arr()
    {
        delete[] a;
    }


};

int main()
{
    arr char1("Engineers are");
    arr char2(" creatures of Logic");
    char1.stringconcat(char2);
    char1.display();
}
