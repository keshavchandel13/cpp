// There are two types of header files
// 1) System header files. eg:
#include<iostream>
// 2) User defined header files eg: #include<dummy.h> but this file should be in your directory
using namespace std;
int main()
{
    int a=3,b=5;
    cout<<"Here are operators in c++"<<endl; // here endl work as \n
    cout<<"Following are the types of operator\n";
    // 1) ARITHAMETIC OPERATOR
    cout<<"\nThe value of a+b is:"<<a+b;
    cout<<"\nThe value of a-b is:"<<a-b;
    cout<<"\nThe value of a*b is:"<<a*b;
    cout<<"\nThe value of a%b is:"<<a%b;
    cout<<"\nThe value of a++ is:"<<a++;
    cout<<"\nThe value of a-- is:"<<a--;
    cout<<"\nThe value of ++a is:"<<++a;
    cout<<"\nThe value of --a is:"<<--a;

    // 2) Assignment operator
    int c,d=9;
    c=d; //This will assign the value of d to c that is 9

    // 3) Comparison Operator
    cout<<"The value of a==b is :"<<(a==b)<<endl;
    cout<<"The value of a>b is :"<<(a>b)<<endl;
    cout<<"The value of a<b is :"<<(a<b)<<endl;
    cout<<"The value of a<=b is :"<<(a<=b)<<endl;
    cout<<"The value of a>=b is :"<<(a>=b)<<endl;
    cout<<"The value of a!=b is :"<<(a!=b)<<endl;

    // 4) Logical operator
     
     //logical AND &&
     // LOgical OR ||
     //Logical NOT !

     // 5) Bitwise Operator 
     cout<<"The value of the Binary And is:"<<(a&b)<<endl;


     // 6) Ternary Operator
     




}
