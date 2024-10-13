#include<iostream>
using namespace std;
class complex{
   int real1,img1;
   int real2,img2;
   int realSum,imgSum;
   public:
      void getData(int r1,int r2,int i1,int i2){
        real1=r1;
        real2=r2;
        img1=i1;
        img2=i2;
   
      }
      void sum(){
       realSum=real1+real2;
       imgSum=img1+img2;
       cout<<"The sum of complex nummber is: "<<realSum<<" + j"<<imgSum<<endl;
      }
      void subtract(){
        cout<<"The subtraction of complex number is: "<<real1-real2<<" + j"<<img1-img2<<endl;
      }
    
};
int main(){
complex calc;
int real1,real2,img1,img2;
       cout<<"Enter the first number"<<endl;
        cout<<"Enter the value of the real part"<<endl;
        cin>>real1;
        cout<<"Enter the value of the imaginary part"<<endl;
        cin>>img1;

       cout<<"Enter the second number"<<endl;
        cout<<"Enter the value of the real part"<<endl;
        cin>>real2;
        cout<<"Enter the value of the imaginary part"<<endl;
        cin>>img2;
        
        calc.getData(real1,real2,img1,img2);
        calc.sum();
        calc.subtract();
return 0;
}