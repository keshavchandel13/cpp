#include<iostream>
using namespace std;

int main(){
    int marks[12];
    for(int i=0;i<3;i++)
{
    cout<<"enter the  number"<<endl;
    cin>>marks[i];
}
    for(int i=0;i<3;i++)
{
    cout<<marks[i]<<endl;
}

int *temp;
temp=marks;

cout<<"this is stored in temp:"<<temp[2];


return 0;
}