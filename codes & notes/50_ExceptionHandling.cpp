#include<iostream>
using namespace std;
class stack{
    int st[5];
    int top;
    public:
    stack(){
        top=-1;
    };
    class full{};
    class empty{};
    void push(int x){
        if(top>=4){
            throw full();
        }

        st[++top]=x;
    }
    int  pop(){
        if (top==-1){throw empty();}
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
    try{
        // obj.pop();
        obj.push(10);
        obj.push(20);
        obj.push(30);
        obj.push(40);
        obj.push(50);
        obj.push(60);
        obj.display();
    }
    catch (stack::full){
        cout<<"The stack is full\n";
    }
    catch (stack::empty){
        cout<<"The stack is empty\n";
    }


return 0;
}