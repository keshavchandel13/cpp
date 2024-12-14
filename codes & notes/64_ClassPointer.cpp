#include<iostream>
using namespace std;
class cl {
public:
    cl(int x) {
        val = x; 
    }

    int val;
    int double_val() {
        return val + val;
    }
};

int main() {
    int cl::*data; 
    int (cl::*fun)(); 

    data = &cl::val; 
    fun = &cl::double_val; 
    cl obj1(19), obj2(20);
    // pointer to the class members
    cl *p1, *p2;
    p1 = &obj1;
    p2 = &obj2;
    // Access the value of 'val' for obj1 and obj2 using the pointer-to-data-member 'data'

    cout << "The value of object1: " << p1->*data << "\n"; 
    cout << "The value of object2: " << p2->*data << endl; 

    cout << "The double value is: " << endl;

    // Call the 'double_val()' function for obj1 and obj2 using the pointer-to-member-function 'fun'

    cout << (p1->*fun)() << endl; 
    cout << (p1->*fun)() << endl; 

    return 0;
}
