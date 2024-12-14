#include<iostream>
using namespace std;
//function pointer: Is a pointer that stores the address of a function. Using function pointers, you can call functions indirectly, pass functions as arguments to other functions, and implement callback mechanisms.
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
void operation(int x, int y, int(*op)(int, int)){
    cout<<"The ans of the operation is: "<<op(x,y)<<endl;
}
int main(){
    operation(10,20,add);
    operation(30,40,sub);
 return 0;
}