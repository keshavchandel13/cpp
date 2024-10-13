#include<iostream>
using namespace std;
/*
Ambibuity in the inheritance:
eg-->If we created multilevel inheritance and it has function with same name the last inherited function you are accesing the member. The function you want to use is in many classes then you should be specific that  which class function do you want to use
*/

// Actual ambiguity is in multiple inheritance


class base1{
    public:
      void greet(){
        cout<<"How are you?"<<endl;
      }
};
class base2{
    public:
      void greet(){
        cout<<"kese ho!"<<endl;
      }
};
class derived: public base1 , public base2{
    int a;
    public:
        void greet(){
            base1::greet();//Here we specified that if anyone call greet through derived display the function greet from base1.
        }
};

class c{
  public:
     void say(){
      cout<<"Hello world"<<endl;
     }
};
class d:public c{

  public:
     void say(){
      cout<<"Hello people"<<endl;
     }
};
int main(){
    
    // Ambibuity: 1 solved
    derived o1;
    o1.greet();
    


   // Ambibuity: 2
   c o2;
   o2.say();
   d o3;
   o3.say(); //Here compiler automatically solve the ambibuity and give preference to the d function as it is earlier declared by you in the inherited class.
    

return 0;
}