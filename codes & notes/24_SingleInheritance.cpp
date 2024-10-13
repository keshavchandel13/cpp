#include<iostream>
using namespace std;
// Single Inheritance--> A derived class with only one base class
class base{
    int data1;// private by default and is not inheritable
      public:
         int data2; //it is inheritable
         void setData();
         int getData1();
         int getData2();
};
void base:: setData(){
    data1=10;
    data2=20;
}
int base:: getData1(){
   
  return data1;
}
int base:: getData2(){
  return data2;
}

class derived :public base{ //class is being derived publically
      int data3;
      public:
        void process();
        void display();

};

void derived :: process(){
      data3=getData1() * data2;
}
void derived :: display(){
      cout<<"Value of the data 1 is: "<<getData1()<<endl; 
      cout<<"Value of the data 2 is: "<<data2<<endl; 
      cout<<"Value of the data 3 is: "<<data3<<endl; 
}
int main(){
  derived o1;
o1.setData();
o1.process();
o1.display();

return 0;
}