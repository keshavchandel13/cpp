#include<iostream>
using namespace std;
// Multilevel Inheritance--> When the one derived class make another derived class and the second derived class make third derived class.
// eg-> there are three classes 1) A 2) B 3) C
// b is derived from a and c is derived from b

class student{
    protected:
       int roll_num;
    public:
       void setRoll_num(int);
       void getRoll_num(void);
};

void student:: setRoll_num(int r){
    roll_num=r;
}
void student:: getRoll_num(void){
   cout<<"The roll number is :"<<roll_num<<endl;
}

class exam: public student{
    protected:
       float maths;
       float physics;
    public:
       void setMarks(float , float);
       void getMarks(void);

};

void exam:: setMarks(float m, float p){
    maths=m;
    physics=p;
}
void exam:: getMarks(void){
    cout<<"The marks is Maths is : "<<maths<<endl;
    cout<<"The marks is Physics is : "<<physics<<endl;
}

class result: public exam{
    float percent;
    public:
       void display(){
        getRoll_num();
        getMarks();
        cout<<"Your Percentage is : "<<((maths + physics)/200)*100<<endl;
       }
};
int main(){
result keshav;
keshav.setRoll_num(231030313);
keshav.setMarks(90,70);
keshav.display();

return 0;
}