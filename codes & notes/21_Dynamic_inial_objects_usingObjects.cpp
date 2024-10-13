//Understanding Dynamic initialization of objects using constructors
#include<iostream>
using namespace std;
class bankdeposit{
    int principal,year;
    float intrest,returnValue;
    public:
       bankdeposit(){}
       bankdeposit(int p,int y, float r); // R can be value of rate of intrest eg 0.04
       bankdeposit(int p, int y,int r); // r is rate of intrest eg-4%
       void show();
};
 bankdeposit:: bankdeposit(int p,int y, float r){
    principal=p;
    year=y;
    intrest=r;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue=returnValue*(1+intrest); 
    }
 }
 bankdeposit:: bankdeposit(int p,int y, int r){
    principal=p;
    year=y;
    intrest=float(r)/100;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue=returnValue*(1+intrest); 
    }
 }
 void bankdeposit:: show(){
   cout<<"The principal amount was "<<principal<<endl;
   cout<<"Return value after "<<year<<" year";
   cout<<" is "<<returnValue<<endl;

 }


int main(){
    bankdeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"Enter the value of p y r"<<endl;
    cin>>p>>y>>r;
    bd1=bankdeposit(p,y,r);
    bd1.show();

    cout<<"Enter the value of p y r"<<endl;
    cin>>p>>y>>R; //When the input is in integer
    bd2=bankdeposit(p,y,R);
    bd2.show();

return 0;
}