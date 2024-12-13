// In nonpolymorphic languages there is no need for RTTI because the type of each object is known at compile time

#include<iostream>
#include <typeinfo>
class myclass1{
    int a;
};
class myclass2{
    int b;
};

using namespace std;
int main(){
    myclass1 obj1;
    myclass2 obj2;
    int i;
    cout<<typeid(obj2).name()<<endl;
    if (typeid(obj1)==typeid(obj2)){
        cout<<"Hello";
    }
    else{
        cout<<"not similar\n";
    }
return 0;
}