#include<iostream>
using namespace std;
/*
class multiplication{
   int num1,num2;
   int c;
   public:
     void multi(int a, int b){
         num1=a;
         num2=b;
          c=a*b;
     }
     void display(){
        cout<<"The multiplication of the number is: "<<c<<endl;
     }
};
*/
inline int multi(int a, int b){
    return a*b;
}

int main(){
    int a,b;
// multiplication obj1;
cout<<"Enter the number 1: "<<endl;
cin>>a;
cout<<"Enter the number 2: "<<endl;
cin>>b;
int c=multi(a,b);
cout<<"The multiplication is "<<c;
// obj1.multi(a,b);
// obj1.display();

return 0;
}