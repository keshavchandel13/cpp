#include<iostream>
using namespace std;
// Template overloading
template <class T> T fun(T a){
    cout<<"The value of the a is: "<<a<<endl;
}
template <class X,class Y> void fun(X b,Y c){
    cout<<"The value of the b is: "<<b<<endl;
    cout<<"The value of the c is: "<<c<<endl;
}
int main(){
    fun(10);
    fun(20,10.66);


return 0;
}