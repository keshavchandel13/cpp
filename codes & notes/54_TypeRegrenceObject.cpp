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

void whatMammal(Mammal &obj){
    cout<<typeid(obj).name()<<endl;
}
int main(){
    Mammal obj1;
    Cat cat;
    Platyus platyus;
    whatMammal(obj1);
    whatMammal(cat);
    whatMammal(platyus);

    return 0;
}