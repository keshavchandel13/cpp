#include<iostream>
using namespace std;
// example of conversion from userdefined datatype to basicdatatype
class Temp{
    int celcius;
    public:
    Temp(int c):celcius(c){};
    void display(){
        cout<<"Temp: "<<celcius<<endl;;
    }
    operator int (){
        return (9.0/5)*celcius+32;
    } 
};
int main(){
    Temp obj(44);
    obj.display();
    int farenheit = obj;
    cout<<"temp in farenheit: "<<farenheit<<endl;
return 0;
}