#include<iostream>
#include<ctime>
#include<algorithm>
using namespace std;
int main()
{
    // To genrate random numebr betweeen 0 to 2 i.e rock paper scissor
    srand(time(0));
    int comp_num=(rand()%3);
 

    string choice;
    cout<<"Enter your choice: 'ROCK' 'PAPER' 'SCISSOR'"<<endl;
    cin>>choice; // can be directly converted to lowercase to handle error.
    transform(choice.begin(),choice.end(),choice.begin(),:: tolower);
    //  cout<<comp_num<<endl;  // used to debugging 
    
    if(comp_num==0 && choice=="rock")
    {
        cout<<"Draw"<<endl;
    }
    else if(comp_num==1 && choice=="rock")
    {
        cout<<"You loosed"<<endl;
    }
    else if(comp_num==2 && choice=="rock")
    {
        cout<<"You winned"<<endl;
    }
    else if(comp_num==0 && choice=="paper")
    {
        cout<<"You winned"<<endl;
    }
    else if(comp_num==1 && choice=="paper")
    {
        cout<<"Draw"<<endl;
    }
    else if(comp_num==2 && choice=="paper")
    {
        cout<<"You Loosed"<<endl;
    }
    else if(comp_num==0 &&  choice=="scissor")
    {
        cout<<"You loosed"<<endl;
    }
    else if(comp_num==1 &&  choice=="scissor")
    {
        cout<<"You winned"<<endl;
    }
    else if(comp_num==2 &&  choice=="scissor")
    {
        cout<<"Draw"<<endl;
    }
 
}