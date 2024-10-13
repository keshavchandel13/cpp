#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    //constructor Overloading
      complex(int x, int y){ //constructor-1
        a=x;
        b=y;
      }
      complex(int x){//constructor-2
        a=x;
        b=9;
      }
    //   constructor 1 & 2 have same name their execution depend upon the parameter passed thus it is called as constructor overloading
       void printData(void){
         cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
     }
};
int main(){
complex o1(2,5);
o1.printData();

complex o2(2);
o2.printData();

return 0;
}