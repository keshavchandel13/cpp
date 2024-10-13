#include<iostream>
using namespace std;
inline int product(int a,int b) //Inline function is  used when fuction do small tasks. It help function to execute code fast. The code of the function executes in the same line where it is declared.
{
    return a*b;
}
int main(){
int a=10,b=2;
cout<<"This is the product of the two number: "<<product(a,b);

return 0;
}