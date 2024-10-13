#include<iostream>
using namespace std;
void multi(int *a,int *b)//formal parameters
{
    *a=*a*2;
    *b=*b*3;
}

int main(){ 
    int a=9,b=10;
    cout<<"The value of the a is :"<<a<<endl;
    cout<<"The value of the b is :"<<b<<endl;
    multi(&a,&b);//actual parametrs
    cout<<"The value of the a is :"<<a<<endl;
    cout<<"The value of the b is :"<<b<<endl;
return 0;
}