#include<iostream>
using namespace std;
int main()
{
   float grade_pts[10];
   float credit_pts[10];
   float cgpa;
   float sum=0,multi=0;
   float sub;
   cout<<"Enter the number of the  subjects you have"<<endl;
   cin>>sub;
   for(int i=0;i<sub;i++)
   {
    cout<<"Enter the grade points of subject:"<<i+1<<endl;
    cin>>grade_pts[i];
    cout<<"Enter the  cource credit of the subject:"<<i+1<<endl;
    cin>>credit_pts[i];
   }
   for(int i=0;i<sub;i++)
   {
    sum=sum+credit_pts[i];
    multi=multi + grade_pts[i]*credit_pts[i];

   }
  cgpa= multi/sum;
   cout<<"Your cgpa is:"<<cgpa;
}