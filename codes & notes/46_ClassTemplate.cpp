// Class Template
#include<iostream>
using namespace std;
template <class Type>
class stack{
    Type st[50];
    int top;
    public:
    stack(){
        top =-1;
    }
    void push(Type x){
        st[++top]=x;
        cout<<"Process completed\n";
    }
    Type pop(){
        return st[top--];
    }
};
int main(){  
    stack<int> s1;
    s1.push(12);
    s1.push(13);
    s1.push(14);
    s1.push(15);
    cout<<s1.pop()<<endl;
    cout<<s1.pop();


    return 0;
}