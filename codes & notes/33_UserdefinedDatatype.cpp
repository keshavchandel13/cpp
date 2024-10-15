#include<iostream>
// Example of converting basic datatype into user deffined datatype
using namespace std;
class Temp{
    int celcius;
    public:
    Temp(int c):celcius(c){}
    void display(){
        cout<<"The temprature is: "<<celcius;
    }
};
int main(){
    int temp;
    cout<<"Enter the temprature in the celcius: "<<endl;
    cin>>temp;
    Temp obj(temp);
    obj.display();


return 0;
}