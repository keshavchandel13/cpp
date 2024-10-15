#include<iostream>
using namespace std;
// class conversion 
// Methods to convert class A to class B
// 1) Conversion Constructor 
// 2) Type conversion operator

// 1) conversion Constructor
class A{
    int celcius;
    public:
    A(int c):celcius(c){}
    int getCelcius(){
        return celcius;
    }
};
class B{
    int farenheit;
    public:
    B(int f):farenheit(f){}
    B(A &obj){
        farenheit = (obj.getCelcius()*9/5)+32;
    }
    void display(){
        cout<<"Temp is farenheit: "<<farenheit<<endl;
    }
};

int main(){
    A obj1(44);
    B obj2 = obj1;
    obj2.display();


return 0;
}