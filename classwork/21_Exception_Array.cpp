#include<iostream>
using namespace std;

int main(){
    int arr[4]={1,2,3,4};
    cout<<"Enter the index you want to access"<<endl;
    int i;
    cin>>i;
    try{
        if(i>=4){
            throw "Array out of bound";
        }
        cout<<arr[i];
    }
    catch(const char* msg){
        cout<<msg<<endl;
    }
return 0;
}