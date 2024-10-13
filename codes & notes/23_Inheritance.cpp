// Inheritance
#include<iostream>
using namespace std;
//Reusability is a very importance feature of OOPs.
// IN cpp we can reuse a class and add additional features to it. 
//The concept of reusability in cpp is supported using inheritance.
//The existing class is called as ~Base class
// The new class which is inherited is class as derived class
// types of inheritance
// 1) Single 2) Multiple 3) Hierarchial 4) Multilevel 5) Hybrid

// How to inherit class
class employee{ //Base class
    public:
    int id;
    float salary;
        employee(){} // base class default constructor
        employee(int input){
            id=input;
            salary=100;
        }
};

//derived class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     class members / methods /etc
// }

// creating a programmer class derived from employee base class
class programmer :   employee{
    public:
   int languageCode=9;
   programmer(int input){
    id=input;
   }
   void getdata(){
    cout<<id<<endl;
   }

};

//about visibility mode:
// 1) Default visibility mode is private
// 2) Private visibility mode: Public members of base class become private members of the derived class
// 3) Public visibility mode: Public members of base class become public members of the derived class
// 4) Private members of the base class can not be inherited in the derived class.

int main(){
  employee keshav(1),robot(2);
  cout<<keshav.salary<<endl;
  cout<<robot.salary<<endl;
  programmer ram(3);
  cout<<ram.languageCode<<endl;
  ram.getdata();

return 0;
}