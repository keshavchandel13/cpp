#include<iostream>
#include<typeinfo>
using namespace std;
template <class T>
class Distance{
    public:
    T km;
    Distance(T k){
        km=k;
    }
};
int main(){
    Distance <int> obj1(10),obj2(39);
    Distance <double> obj3(20.3);
    cout<<"\n The type of the object 1 is :"<<typeid(obj1).name();
    cout<<"\n The type of the object 2 is :"<<typeid(obj2).name();
    cout<<"\n The type of the object 3 is :"<<typeid(obj3).name();
    if(typeid(obj1)==typeid(obj2)){
        cout<<"\nObject 1 & Object 2 are similar";
    }
    if(typeid(obj1)==typeid(obj3)){
        cout<<"\nobject 1 & object 3 are similar";
    }
    else{
        cout<<"\nThe objects are not similar";
    }
    return 0;
}