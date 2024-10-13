#include<iostream>
using namespace std;
class test{
    int num;
    public:
    test():num(8){
        cout<<"const"<<endl;
    }
    void operator ++(){
        cout<<"Operator Overloaded"<<endl;
        num+=10;
    }
    void display(){
        cout<<"Calling display Function"<<endl;
        cout<<"The num = "<<num<<endl;
    }

};
int main(){
    test t;
    t.display();
    ++t;
    t.display();
return 0;
}