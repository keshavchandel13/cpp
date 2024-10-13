#include<iostream>
using namespace std;
class employee{
  string name;
  int age;
     public:
       void setData(void){
        cout<<"Enter the Name of the person"<<endl;
        cin>>name;
        cout<<"Enter the age of the person"<<endl;
        cin>>age;
       }
       void display(){
        cout<<"The name of the person is: "<<name<<endl;
        cout<<"The age of the person is: "<<age<<endl;
       }
};
int main(){
    employee keshav,rajat;
    keshav.setData();
    rajat.setData();
    keshav.display();
    rajat.display();
}