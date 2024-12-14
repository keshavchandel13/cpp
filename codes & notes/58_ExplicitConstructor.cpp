#include<iostream>
using namespace std;
class data{
    int i;
    public:
    explicit data(int x):i(x){};
    void display(){
        cout<<"the value of the i is :"<<i<<endl;
    }
};
int main(){
    data obj(10);
    // data obj1 = 20; // this constructor will convert implicitly
    obj.display();
    // obj1.display(); // this will also run implicitly 
    // To avoid this conversion we use explicit keyword

};