#include<iostream>
using namespace std;
// Const fuction are the function whoose values can't we changed
// but some time there is a scenario where we want to change the value of some varible and let other variable be constant
// in that case we use mutable: the value of these variable can be changed in const function
class Data{
    mutable int i;
    int j;
    public:
    void setI (int x) const{
        i = x; // It will compile as we have set the i as mutable 
    }
    void setJ (int y) const{
        // j= y; //This will throw error
    }
    void print(){
        cout<<"the value of the i is: "<<i;
    }
};
int main(){
    Data obj;
    obj.setI(10);
    obj.print();
    return 0;
}