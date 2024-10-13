// Simple Calculator
#include<iostream>
// #include<math.h>
using namespace std;
int main()
{
    int a,b;
    char choice;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of the b:"<<endl;
    cin>>b;
    cout<<"Enter the operation you want to do (+,-,*,/)"<<endl;
    cin>>choice;
    switch(choice)
    {
        case '+':
        {
            cout<<"The sum of the two number is:"<<a+b<<endl;
            break;
        }
        case '-':
        {
            cout<<"The subtraction of the two number is:"<<a-b<<endl;
            break;
        }
        case '*':
        {
            cout<<"The multiplication of two number is:"<<a*b<<endl;
            break;
        }
        case '/':
        {
            if(b!=0)
            {
                 cout<<"The division of two number is:"<<a/b<<endl;
            }
          else
          {
            cout<<"Can't divide with zero"<<endl;
          }
            break;
        }
        default:
        {
            cout<<"Enter valid operator"<<endl;

        }
    }

    
}
