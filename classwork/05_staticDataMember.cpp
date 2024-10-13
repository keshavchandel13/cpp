#include<iostream>
using namespace std;
class item{
  int number;
  static int count;
   public:
     void setData(int n){
        number=n;
        count++;
     }
     void display(){
        cout<<"Number= "<<number<<endl;
        cout<<"Count: "<<count<<endl;
     }
};
int item:: count;



int main(){
item a,b,c,d,e,f;
a.setData(10);
b.setData(20);
c.setData(30);
d.setData(40);
e.setData(50);
f.setData(60);
a.display();

return 0;
}

