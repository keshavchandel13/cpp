#include<iostream>
using namespace std;
/*
here two classes b and c are inherited from a. A is made as virtual class which means if at some class there is repetion of members of the b and c which was taken from a then  a virtual class solve the problem of the repetion and only give one copy forward to next class (suppose d)

                                      class a
                            ---------------------------
                            |                         |
                        class b                   class c
                         -------------    ---------------
                                       |
                                       class d
syntax:
class b: virtual public a{
};
class c: virtual public a{
};
*/
class student{
   protected:
     int rollNo;
    public:
       void set_num(int a){
         rollNo=a;
      }
      void print_num(void){
         cout<<"Your roll no is : "<<rollNo<<endl;
      }
};

class test: virtual public student{
     protected:
        float maths,physics;
    public:
       void set_marks(float m1, float m2){
        maths=m1;
        physics=m2;
       }
       void print_marks(void){
        cout<<"Your result is: "<<endl
            <<"Maths: "<<maths<<endl
            <<"Physics: "<<physics<<endl;
       }
};

class sports: virtual public student{
    protected:
     float score;
    public:
      void set_score(float sc){
        score=sc;
      }
      void print_score(void){
        cout<<"Your PT score is "<<score<<endl;
      }
};

class result : public test, public sports{
     private:
        float total;
    public:
       void display(void){
        total= maths+physics+score;
        print_num();
        print_marks();
        print_score();
        cout<<"Your total score is: "<<total<<endl;
       }
};


int main(){
/*

                                      class student
                            ---------------------------
                            |                         |
                        class test                   class sports
                         -------------    ---------------
                                       |
                                 class result
*/
result keshav;
keshav.set_num(231030313);
keshav.set_marks(90,88.5);
keshav.set_score(9);
keshav.display();



return 0;
}