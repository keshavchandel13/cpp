// class Template when the member function are declared outside the class
#include<iostream>
using namespace std;
template <class Type>
class stack{
    Type st[50];
    int top;
    public:
    stack();
    void push(Type x);
    Type pop();
    void display(){
        for(int i =0 ;i<=top;i++){
            cout<<st[i]<<endl;
        }
    }
};
// Declaration outside the class
template <class Type>
stack<Type>::stack(){
    top = -1;
}
template <class Type>
void stack<Type>::push(Type x){
    st[++top] = x;
}
template <class Type>
Type stack<Type>::pop(){
    return st[top--];
}

int main(){
    stack <double> s1;
    s1.push(1.1);
    s1.push(1.2);
    s1.push(1.3);
    s1.push(1.4);
    s1.push(1.5);
    s1.display();
    cout<<"After poping"<<endl;
    s1.pop();
    s1.pop();
    s1.display();
return 0;
}