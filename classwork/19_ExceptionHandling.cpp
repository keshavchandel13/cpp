#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    try{
        if(age>=18){
            cout<<"Welcome to the portal"<<endl;
        }
        else{
            throw age;
        }
    }
    catch(int x){
        cout<<"Your age is "<<age<<" you can't access the portal"<<endl;
    }

return 0;
}