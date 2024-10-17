#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound(){
        cout<<"This is animal sound"<<endl;
    }
};
class Cat:public Animal{
    public:
    void sound() override{
        cout<<"Cat sound: meow!"<<endl;
    }
    void callAnimalSound(){
        Animal::sound();
    }
};
int main(){
Animal *ptr;
Cat obj;
ptr = &obj;
ptr->sound();
obj.callAnimalSound();
return 0;
}