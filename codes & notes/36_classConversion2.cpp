#include<iostream>
using namespace std;
// 2) using conversion operator
class Farenheit{
    int farenheit;
    public:
    Farenheit(int f):farenheit(f){}
    void display(){
        cout<<farenheit;
    }
};
class Celcius{
    int celcius;
    public:
    Celcius(int c):celcius(c){}
    operator Farenheit(){
        int f = (celcius*9/5)+32;
        return Farenheit(f);
    }
};

int main(){
    Celcius temp(44);
    Farenheit temp2 = temp;
    temp2.display();
return 0;
}