#include<iostream>
using namespace std;
class data{
   int num;
   int cost;
   public:
     void setData(int a, int b){
         num=a;
         cost=b;
        
     }
     void display(){
        cout<<"Number: "<<num<<"\t"<<"Cost: "<<cost<<endl;
     }
};
int main(){
data o1;
o1.setData(2,3000);
o1.display();

return 0;
}

