#include<iostream>
using  namespace std;
int main()
{
    // 1) If else statement
       int i=9;
       if(i==9)
       {
        cout<<"This is if else statement"<<endl;
       }
       else{
        cout<<"If the condition part will be false then else will be executed"<<endl;
       }

    // 2) If else if statement
    int y=2;
    if(y!=2)
    {
        cout<<"this is if else if statement"<<endl;
    }
    else if(y==2)
    {
        cout<<"This can check multiple conndition"<<endl;
    }
    else{
        cout<<"is all the condition become false this will be executed"<<endl;
    }

    // 3) switch statement
    int j=1;
    switch(j)
    {
        case 1:
        {
            cout<<"This will be executed when the value of the j will be 1"<<endl;
            break;
        }
        case 2:
        {
            cout<<"This will be executed when the value is 2"<<endl;
            break;
        }
        default:{
            cout<<"if any of the case is not met"<<endl;
            break;
        }
    }

}