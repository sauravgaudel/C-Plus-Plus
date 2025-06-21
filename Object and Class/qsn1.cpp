// Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic concept of class and 
// object. Make separate classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and make conversion 
// functions in each class for conversion from one to another. For example, you need to have a function toFahrenheit() in class Celsius that 
// converts to Fahrenheit scale and returns the value.

#include<iostream>
using namespace std;

class Celcius{
    private:
    float temp;
    
    public:
   
    void getdata(){
        cout<<"Enter Temperature in degree celcius:";
        cin>>temp;
    }

    float Tofahrenheit(){
        
        return (9.0/5.0*temp)+32;
    }
   
};
class Fahrenheit{
    private:
    float temp;
    
    public:
    void getdata(){
        cout<<"Enter Temperature in degree Fahrenheit:";
        cin>>temp;
    }

    float ToCelcius(){
        return (5.00/9.00 *(temp-32));
    }
    
};
int main(){
       Celcius obj;
       Fahrenheit obj1;
       obj.getdata();
       cout<<"Temperature in degree fahrenheit is:"<<obj.Tofahrenheit()<<endl;

       obj1.getdata();
       cout<<"Temperature in degree celcius is:"<<obj1.ToCelcius();

}