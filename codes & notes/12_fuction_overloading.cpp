#include<iostream>
using namespace std;
int sum(int a,int b) //first function of add
{
    cout<<"3 arguments function is executed"<<endl;
    return a+b;// when there is 2 arguments this function will be executed
}

int sum(int a,int b,int c) //second function of add
{
    cout<<"3 arguments function is executed"<<endl;
    return a+b+c;// when there is 3 arguments this function will be executed
}
int main(){
int a,b,c;
cout<<"Enter the value of the a:"<<endl;
cin>>a;
cout<<"Enter the value of the b:"<<endl;
cin>>b;
cout<<"Enter the value of the c:"<<endl;
cin>>c;
cout<<"The sume is: "<<sum(a,b)<<endl;
cout<<"The sume is: "<<sum(a,b,c)<<endl;

    
return 0;
}