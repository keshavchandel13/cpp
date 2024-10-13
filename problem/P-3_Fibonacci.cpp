// FIBONACCI SERIES
#include<iostream>
using namespace std;
void terms(int num)
{
    int t1=0,t2=1,nextTerm=0;
    cout<<"Fibonacci series is:"<<t1<<","<<t2<<",";
    for(int i=2;i<=num;i++)
    {
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    
        cout<<nextTerm<<",";
    }
  
}
int main()
{
    int num;
    cout<<"Enter the number of the terms you want"<<endl;
    cin>>num;
    terms(num);
}