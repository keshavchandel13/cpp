#include<iostream>
using namespace std;
int main()
{
    //LOOPs
    // 1) for loop 
    // syntax: 
    for(int i=1;i<3;i++)
    {
        cout<<"This is for loop :"<<i<<endl;
    }

    // 2) while loop 
    // syntax: 
    int j=1;
    while(j<3)
    {
        cout<<"This is while loop:"<<j<<endl;
        j++;
    }

    // 3) do- while loop 
    // syntax: 
    int c=1;
    do{
        cout<<"This is do-while loop:"<<c<<endl;
        c++;
    }while(c<3);
}