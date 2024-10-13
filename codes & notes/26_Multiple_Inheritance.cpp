#include<iostream>
using namespace std;
//Multiple Inheritance--> A derived class with more than one base class.

/*
syntax:
class derived: visibility-mode base1 , visibility-mode base2 , visibility-mode base3{
class body of the ckass derived
};
*/

class base1{
   protected:
      int base1int;
    public:
       void set_base1int(int a){
        base1int=a;
       }
};
class base2{
   protected:
      int base2int;
    public:
       void set_base2int(int a){
        base2int=a;
       }
};

class derived: public base1 , public base2{
    public:
       void show(){
        cout<<"The value of the base1int is: "<<base1int<<endl;
        cout<<"The value of the base2int is: "<<base2int<<endl;
        cout<<"The sum is : "<<base1int+base2int<<endl;
       }
};

/*
The inherited derived class look like:
Data members:
base1int ---> Protected
base2int ---> Protected
Member function:
set_base1int()---->Public
set_base2int()---->Public
show()---->Public


*/
int main(){
derived keshav;
keshav.set_base1int(10);
keshav.set_base2int(40);
keshav.show();

return 0;
}