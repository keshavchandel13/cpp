#include<iostream>
using namespace std;
class Data{
    mutable int i;
    int j;
    public:
    Data(){
        cout<<"constructor\n";
    }
    void setI (int x) const{
        i = x; // It will compile as we have set the i as mutable 
    }
    void setJ (int y){
        // j= y; //This will throw error
    }
    void print(){
        cout<<"the value of the i is: "<<i;
    }
};
int main(){
    const Data d;
    d.setI(10);
    d.print();
    // d.setJ(20); as the object is constant we can't change value

    return 0;
}