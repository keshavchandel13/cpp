// virtual function: is a member function that is declared within a base class with the virtual keyword and is re-defined (Overridden) by a derived class.

//vTable or Virtual Table: is a table of function pointers that is created by the compiler to support dynamic polymorphism. Whenever a class contains a virtual function, the compiler creates a Vtable for that class

//vtable: Each object of the class is then provided with a hidden pointer to this table, known as Vptr.

#include<iostream>
#include<typeinfo>
using namespace std;
class Mammal{
    public:
    virtual bool laysEgg(){ return false;}
};
class Cat: public Mammal{

};
class Platyus:public Mammal{
    public:
    bool laysEgg(){ return true;}
};
class Dog: public Mammal {
 public:

};
Mammal *factory(){
    switch(rand()%3){
        case 1: return new Dog;
        case 2: return new Cat;
        case 3: return new Platyus;
    }
}
int main(){
    Mammal *ptr;
    int dog=0,cat=0,platyus=0;
    for(int i=0;i<5;i++){
        ptr = factory();
        cout<<"The type of the object is: "<<typeid(*ptr).name()<<endl;
        if(typeid(*ptr)==typeid(Dog)) dog++;
        if(typeid(*ptr)==typeid(Cat)) cat++;
        if(typeid(*ptr)==typeid(Platyus)) platyus++;
    }
    cout<<"Dog:"<<dog<<"\ncat:"<<cat<<"\nplatyus:"<<platyus;


    return 0;    
}
