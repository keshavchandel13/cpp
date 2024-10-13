#include<iostream>
using namespace std;
class complex{
  int a,b;
  public:
    //Creating a constructor 
    // The constructor is the special member function with same name as the class. 
    // it is used to initializ the objects of the class
    // It is automatically invoked(execute) whenever a object is created
    complex(void);// Constructor declaration
    //contructor should be decalared in public section of the class
    void printData(void){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex :: complex(void){//constructor defination  //default constructor
   a=10;
   b=40;
   
 //these have no return type and can't return value
 //they can have default  arrgumnets 
 //we cannot refer to their address
}
int main(){
complex o1;
o1.printData();

return 0;
}