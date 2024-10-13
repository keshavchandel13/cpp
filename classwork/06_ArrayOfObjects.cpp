#include<iostream>
using namespace std;
class employee{
    string name;
    int age;
    public:
       void setData(){
         cout<<"Enter the Name of the employee is: "<<endl;
         cin>>name;
        cout<<"Enter the age of the employee is: "<<endl;
         cin>>age;
       }
       void display(){
        cout<<"The Name of the employee is: "<<name<<endl;
        cout<<"The age of the employee is: "<<age<<endl;
       }
};
int size=3;
int main(){
 
employee e1[size];
for(int i=0;i<size;i++){ 
    cout<<"Enter the detail of the employee: "<<i+1<<endl; 
    e1[i].setData();
    cout<<"\n";
}
cout<<"\n";
for(int i=0;i<size;i++){
      cout<<"The detail of the employee: "<<i+1<<endl;
    e1[i].display();
    cout<<"\n";
}

return 0;
}