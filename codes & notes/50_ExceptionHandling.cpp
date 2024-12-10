#include<iostream>
using namespace std;
class stack{
    int st[50];
    int top;
    public:
    stack(){
        top=-1;
    };
    void push(int x){

        st[++top]=x;
    }
    int  pop(){
        return st[top--];
    };
    void display(){
        for(int i =0 ;i<=top;i++){
            cout<<st[i]<<endl;
        }
    }
};
int main(){
    stack obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.display();


return 0;
}