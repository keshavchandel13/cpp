#include<iostream>
using namespace std;
class Base{
    public:
    virtual void display(){
        cout<<"This is base class"<<endl;
    }
};
class derived:public Base{
    public:
    void display() override{
        cout<<"This is derived class"<<endl;
    }
};
int main(){
    Base *obj1;
    derived obj2;
    obj1 = &obj2;
    obj1->display();


return 0;
}