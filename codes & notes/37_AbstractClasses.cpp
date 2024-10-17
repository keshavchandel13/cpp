#include<iostream>
using namespace std;
class Shape{
    public:
    virtual int draw()=0;
    void display(){
        cout<<"This is shape"<<endl;
    }
};
class circle:public Shape{
    int radius;
    public:
    circle(int r):radius(r){}
    int draw() override{
        return 3.141*radius*radius;
    }
};
class square:public Shape{
    int lenght;
    public:
    square(int l):lenght(l){}
    int draw() override {
        return lenght*lenght;
    }
};
int main(){
    Shape *ptr;
    circle obj(2);
    ptr = &obj;
    cout<<"area: "<<ptr->draw()<<endl;
    cout<<"The area of the circle is: "<<obj.draw()<<endl;
    obj.display();

    square obj1(2);
    cout<<"The area of the square is: "<<obj1.draw()<<endl;
    obj1.display();


return 0;
}