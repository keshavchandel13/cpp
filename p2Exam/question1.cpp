#include<iostream>
#include<string>
using namespace std;
template <class Type>
class stack{
    Type st[50];
    int top;
    public:
    stack(){
        top = -1;
    }
    void push(Type element){
        if(top>49){
            cout<<"Stack is full!"<<endl;
        }
        else{
        st[++top] = element;
        }
    }
    Type pop(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
        }
        else{
            return st[top--];
        }
    }

};
int main(){
    // Int stack
    stack <int> s1;
    stack <string> s2;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    cout<<s1.pop()<<endl;
    // string stack
    s2.push("Keshav");
    s2.push("Rahul");
    s2.push("Karan");
    cout<<s2.pop();


return 0;
}