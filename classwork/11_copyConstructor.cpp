#include<iostream>
using namespace std;
class demo{
   int n1,n2;
   public:
   demo(int x,int y){
    n1=x;
    n2=y;
   }
   demo(demo &s){
    n1=s.n1;
    n2=s.n2;
   }
   void display(){
    cout<<"The number n1 is: "<<n1<<endl;
    cout<<"The number n2 is: "<<n2<<endl;
   }
};
int main(){
demo d(12,13);
demo s=d;
d.display();
s.display();


return 0;
}