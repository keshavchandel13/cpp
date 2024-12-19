#include<iostream>
#include<memory>
using namespace std;
//  Type 1: Smart pointer Exclusive OwnerShip

// 📋 Summary
// Smart Pointer       	Ownership	            Copy Allowed?	            Use Case
// unique_ptr	        Exclusive (1 owner)	    ❌ No (only move)	 Unique ownership of a resource.
// shared_ptr	        Shared (many owners)	✅ Yes	            When multiple pointers need to share ownership.
// weak_ptr	        No ownership (observer)	    ✅ Yes	          Avoid circular references and observe shared_ptr.

int main(){
    unique_ptr <double> ptr1 = make_unique<double>(10.2);
    cout<<"The ptr1 holds the value"<<*ptr1<<endl;

    unique_ptr <double> ptr2 = move(ptr1);
    cout<<"The ptr2 holds the value"<<*ptr2<<endl;

    if(!ptr1){
        cout<<"Now ptr1 is null after move\n";
    }

    // In smart pointer there is no need to declare free memory it automatically free memory
return 0;
}