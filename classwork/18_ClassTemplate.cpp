#include<iostream>
using namespace std;
template <class T1,class T2>
// class Template  with multiple parameters
class A{
    private:
    T1 a;
    T2 b;
    public:
    A(T1 x, T2 y){
        a= x;
        b= y;
    }
    void sum(){
        cout<<"The sum of the number is: "<<a+b<<endl;
    }
};
int main(){
    A<int,float>obj(3,4.5);
    obj.sum();


return 0;
}