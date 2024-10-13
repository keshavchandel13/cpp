#include<iostream>
#include<math.h>
#define PI 3.14159
using namespace std;
class simpleCalculator{
    protected:
    float num1;
    float num2;
    string op;
    float ans;
    public:
      void input(float n1, float n2 , string sign){
        num1=n1;
        num2=n2;
        op=sign;
        if(op=="+"){
          ans=num1+num2;
        }
        else if(op=="-"){
            ans=num1-num2;
        }
        else if(op=="*"){
            ans=num1*num2;
        }
        else if(op=="/"){
            if(num2!=0){
             ans=num1/num2;
            }
            else{
                cout<<"Invalid division with 0"<<endl;
            }
        }
      }
};

class scientificCalculator: public simpleCalculator{
    public:
    void compute(float n1, string sign){
        num1=n1;
        op=sign;
        if(op=="log"){
          ans=log(num1);
        }
        else if(op=="sin"){
            ans=sin(num1*PI/180);
        }
        else if(op=="cos"){
             ans=cos(num1*PI/180);
        }
        else if(op=="tan"){
             ans=cos(num1*PI/180);
        }
        else if(op=="cosec"){
             ans=1.0/sin(num1*PI/180);
        }
        else if(op=="sec"){
             ans=1.0/cos(num1*PI/180);
        }
        else if(op=="cot"){
             ans=1.0/tan(num1*PI/180);
        }
        else if(op=="square"){
             ans=sqrt(num1);
        }
    }
     
};

class hybridCalculator: public scientificCalculator{
    public:
       void display(){
        cout<<"Your answer is : "<<ans<<endl;
       }
};
int main(){
    float num1,num2;
    int choice;
    string op;
    hybridCalculator o1;

cout<<"To use simple calculator enter 1"<<endl;
cout<<"To use scinntific  calculator enter 2"<<endl;
cin>>choice;
if(choice==1){
cout<<"Enter the first number : "<<endl;
cin>>num1;
cout<<"Enter the operator : "<<op<<endl;
cin>>op;
cout<<"Enter the second number : "<<endl;
cin>>num2;
o1.input(num1,num2,op);
}
else {
    cout<<"Enter the operator(log, sin, cos, tan, cosec, sec, cot, square): "<<op<<endl;
    cin>>op;
    cout<<"Enter the  number : "<<endl;
    cin>>num1;
    o1.compute(num1,op);
}
o1.display();
return 0;
}