#include<iostream>
using namespace std;
// Operator overloading
class Complex{
    int real;
    int imag;
    public:
    Complex(){
        real =0 ;
        imag = 0;
    }
    Complex(int r, int i){
        real =r ;
        imag = i;
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    Complex operator +(Complex obj){
        Complex t;
        t.real = real + obj.real;
        t.imag = imag + obj.imag;
        return t;
    }
};
int main(){
    Complex obj1(2,7);
    Complex obj2(3,5);
    Complex obj3 = obj1+obj2;
    obj3.display();

return 0;
}