#include<iostream>
using namespace std;
class person{
   string name;
   int age;
   public:
      person(){
        name="Keshav";
        age=18;
      }
      void display(){
        cout<<"The name of the person is "<<name<<endl;
        cout<<"The age of the person is "<<age;
      }
};
int main(){

    person o1;
    o1.display();


return 0;
}