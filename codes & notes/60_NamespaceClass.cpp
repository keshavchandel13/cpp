#include<iostream>
using namespace std;
namespace college{ // multiple  Namespace can have same name
    class student{
        string name;
        int age;
        public:
        student(string n,int a):name(n),age(a){}
        void display(){
            cout<<"Name:"<<name<<"\nAge:"<<age<<endl;
        }
    };
}
int main(){
    college::student s1("Keshav Chandel",19);
    college::student s2("Rahul",20);
    college::student s3("ROhan",21);
    s1.display();
    s2.display();
    s3.display();
    //  ----- OR ----- //
    using namespace college; // here we are 'using' to import all  the variable,class,methods present in namespace
    student s4("Karan",20);
    s4.display();



return 0;
}