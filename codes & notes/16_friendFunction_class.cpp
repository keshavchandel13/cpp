#include<iostream>
using namespace std;
//Forward declaaration
class complex;
//Calculator class code
class calculator{
   public:

     int add(int a, int b){
        return a+b;
     }
     //forward declaration of the sumRealComplex function
     int sumRealComplex(complex ,complex );
    //forward declaration of the sumImaginary function
     int sumImaginary(complex,complex);
};
//Complex class code
class complex{
  int a,b;

  public: 
    // Indivisually declaring the function as a friend
    friend int calculator:: sumRealComplex(complex o1,complex o2);//IT can be commented out now as below we declared class as a friend so it can access its members
    friend int calculator:: sumImaginary(complex o1,complex o2);
    //Problem faced---> when we have to make many functions which need the access of the other class we have to declare it many times.... to solve this problem
    //c++ introduced friend class

    //DECLARING WHOLE CLASS AS A FRIEND CLASS
    friend class calculator;  
    void setData(int n1,int n2)
    {
        a=n1;
        b=n2;
    }

    void printData(void){
        cout<<"The sum of the complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

     //sumRealComplex code 
     int calculator:: sumRealComplex(complex o1 ,complex o2 ){ 
        return o1.a + o2.a;
     }
     //sumImaginary code 
     int calculator:: sumImaginary(complex o1 ,complex o2 ){ 
        return o1.b + o2.b;
     }

int main(){
complex o1,o2;
o1.setData(2,4);
o2.setData(4,6);

calculator calc;
int result= calc.sumRealComplex(o1,o2);
cout<<"The result of the sum of the real part of the comlex number is: "<<result<<" and the sum of imaginary part is: "<<calc.sumImaginary(o1,o2)<<endl;
return 0;
}