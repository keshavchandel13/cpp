#include<iostream>
#include<typeinfo>
using namespace std;
class Mammal{
    public:
    virtual bool laysEgg(){ return false;}
};
class Cat: public Mammal{
    public:
    bool laysEgg(){ return false;}
};
class Platyus:public Mammal{
    public:
    bool laysEgg(){ return true;}
};
int main(){
    Mammal *p,Anymammal;
    Cat cat;
    Platyus platyus;
    p=&Anymammal;
    cout<<"\nP is pointing to:";
    cout<<typeid(*p).name();

    p=&cat;
    cout<<"\nP is pointing to:";
    cout<<typeid(*p).name();

    p=&platyus;
    cout<<"\nP is pointing to:";
    cout<<typeid(*p).name();


    return 0;
}
/*
Output:
p is pointing to an object of type class Mammal
p is pointing to an object of type class Cat
p is pointing to an object of type class Platypus

Removing virtual keyword will result in following output:

p is pointing to an object of type class Mammal
p is pointing to an object of type class Mammal
p is pointing to an object of type class Mamma
*/