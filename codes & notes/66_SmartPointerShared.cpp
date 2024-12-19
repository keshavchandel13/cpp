#include<iostream>
#include<memory>
using namespace std;

int main(){
    shared_ptr<int> ptr1= make_shared<int>(10);
    cout<<"the value of the ptr1 is:"<<*ptr1<<endl;
    shared_ptr <int> ptr2 = ptr1;
    cout<<"The value of the ptr2 is: "<<*ptr2<<endl;
    if(!ptr1){
        cout<<"The ptr1 is pointing to null\n";
    }
    else{
        cout<<"This is still pointing to the location\n";
    }
    // Reference count shows how many pointers own this object
    cout<<"refrence count of the ptr1 is: "<<ptr1.use_count();
return 0;

}