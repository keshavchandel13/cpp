#include<iostream>
using namespace std;
class person{
    string name;
    int age;
    string batch;
      public:
         person(){
            name="DeafultName";
            age=100000000;
            batch="A19";
         }
         person(string n, int a){
            name=n;
            age=a;
             batch="A19";
         }
         void display(){
            cout<<"The name of the person is: "<<name<<endl;
            cout<<"The age of the person is: "<<age<<endl;
            cout<<"The batch of the person is: "<<batch<<endl;
            cout<<"\n\n\n";
         }
};
int main()
{
    string name;
    int age;
     person o;
    cout<<"Enter the name of the  person"<<endl;
    cin>>name;
    cout<<"Enter the age of the  person"<<endl;
    cin>>age;
     person o1(name,age);
     o.display();
     o1.display();
     
}