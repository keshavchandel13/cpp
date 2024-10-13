#include<iostream>
using namespace std;
class TempratureCelsius{
    int celsius;
    public:
    TempratureCelsius(int c){
        celsius = c;
    }
    void conversion(){

    }
    int display(){
        return celsius;
    }

};
class TempratureFahrenheit{
    int fahrenheit;
    public:
    TempratureFahrenheit(int f){
        fahrenheit=f;
    }
    void conversion(TempratureCelsius obj){
      int c = obj.display();
      fahrenheit = (1.8)*32 + 32;

    }
    int  display(){
        return fahrenheit;
    }

};
int main(){
TempratureCelsius obj1(32);
TempratureFahrenheit obj2(0);
obj2.conversion(obj1);
cout<<obj2.display()<<endl;

return 0;
}