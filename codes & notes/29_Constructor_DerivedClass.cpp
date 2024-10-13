#include<iostream>
using namespace std;
/*
   Constructor in Derived class:
   1) if base class constructor does not have any arguments there is no need of any constructor in derived class
   2) But if There are one or more arguments in the base class constructor, derived class need to pass arguments to the base class constructor.
   3) If both base class and derived class constructor have constructor, base class constructor executes first.

   // syntax:
   derived-constructor(argument1,2,3...):Base2-constructor(arg1,2):base-2-constructor(arg3,4){
   .....
   } base-1-constructor(arg1,arg2)

   * special case of virtual base class
   >The constructors for the virtual base classes are invoked before an non virtual base classs
   >Any virtual base class are the constructed before the derived class constructor is executed.
*/

class base1{
  int data1;
    public:
      base1(int i){
         data1=i;
         cout<<"Base1 constructor is called"<<endl;
      }
      void printData1(void){
             cout<<"The data in the base class is"<< data1<<endl;
      }
};
class base2{
  int data2;
    public:
      base2(int i){
         data2=i;
         cout<<"Base2 constructor is called"<<endl;
      }
      void printData2(void){
             cout<<"The data in the base2 class is"<< data2<<endl;
      }
};

class derived: public base1 , public base2{
       int derived1,derived2;
       public:
         //syntax
         derived(int a, int b, int c, int d): base1(a), base2(b){
            derived1=c;
            derived2=d;
            cout<<"Derived class constructor called"<<endl;
         }
               void printData3(void){
             cout<<"The data in the derived class is"<< derived1<<"and"<<derived2<<endl;
      }

          
};
int main(){
derived keshav(2,5,6,4);
keshav.printData1();
keshav.printData2();
keshav.printData3();

return 0;
} 