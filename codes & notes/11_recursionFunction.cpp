#include<iostream>
using namespace std;
int factorial(int num)  
{
    if(num>0) 
    {
    
       return num* factorial(num-1);
    }
    return 1;

}
int main(){
    cout<<"Enter the number you want to find factorial of:"<<endl;
    int num;
    cin>>num;
    cout<<"The factorial is:"<<factorial(num);
return 0;
}