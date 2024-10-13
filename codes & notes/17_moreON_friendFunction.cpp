// #include<iostream>
// using namespace std;
// class y;
// class x{
//   int num;
//   public:
//     void set(int data){
//         num=data;
//     }
//     friend void sum(x,y);
// };

// class y{
//   int data;
//   public:
//     void set(int value){
//         data=value;
//     }
//      friend void sum(x,y);
// };

// void sum(x o1, y o2){
//     cout<<"The sum of the two number is: "<<o1.num + o2.data<<endl;
// }
// int main(){
//   x o1;
//   o1.set(6);
//   y o2;
//   o2.set(4);
//   sum(o1,o2);


// return 0;
// }

// swap two number
#include<iostream>
using namespace std;
class c2;
class c1{
   int n1;
   public: 
      void setNum(int value){
        n1=value;
      }
      void print(void){
        cout<<"The value of the first number is: "<<n1<<endl;
      }
      friend void swap(c1 &, c2 &);
};
class c2{
   int n2;
   public: 
      void setNum(int value){
        n2=value;
      }
      void print(void){
        cout<<"The value of the second number is: "<<n2<<endl;
      }
    friend void swap(c1 &, c2 &);
};

void swap(c1 &o1, c2 &o2){
    int temp=o2.n2;
    o2.n2=o1.n1;
    o1.n1=temp;
}
int main(){
   c1 o1;
   o1.setNum(10);
   c2 o2;
   o2.setNum(20);
   cout<<"The value before swapping "<<endl;
   o1.print();
   o2.print();
   swap(o1,o2);
   cout<<"The value after swapping "<<endl;
   o1.print();
   o2.print();


return 0;
}