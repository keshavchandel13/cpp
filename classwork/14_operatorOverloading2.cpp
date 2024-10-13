#include<iostream>
using namespace std;
class space{
    int x;
    int y;
    int z;
    public:
    void getData(int a, int b, int c){
        x=a;
        y=b;
        z=c;
    }
    void display(){
        cout<<"X = "<<x<<endl;
        cout<<"Y = "<<y<<endl;
        cout<<"Z = "<<z<<endl;
    }
    void operator ++(){
        x=-x;
        y=-y;
        z=-z;
    }

};
int main(){
    space s;
    s.getData(12,-17,88);
    s.display();
    ++s;
    s.display();


return 0;
}