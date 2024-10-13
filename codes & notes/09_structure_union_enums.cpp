#include<iostream>
using namespace std;
// 1) Structure
struct node{
    int roll_no;
    string name;
    float salary;
};
// 2) Union -> similar to structure

// 3) enum 
int main(){
    struct node head;
    head.roll_no=231030313;
    head.name="Keshav";
    head.salary=100.00;
    cout<<head.roll_no<<endl;
    cout<<head.name<<endl;
    cout<<head.salary<<endl;

    enum name{keshav,ram,shyaam};
    name a1=keshav;
    cout<<a1<<endl;
    name a2=ram;
    cout<<a2<<endl;
    name a3=shyaam;
    cout<<a3<<endl;
    cout<<keshav;



return 0;
}