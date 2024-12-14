#include <iostream>
using namespace std;

// Pointer to a class is a pointer that holds the address of an object of the class.
// With this pointer, you can access the members (variables or methods) of the class
// using the arrow operator (->) instead of the dot operator (.).

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
    // Pointer to an integer data member of the 'cl' class
    int cl::*data; 

    // Pointer to a member function of 'cl' that takes no arguments and returns an int
    int (cl::*fun)(); 

    // Store the offset (or position) of the 'val' data member within the class
    data = &cl::val; 

    // Store the address (or position) of the 'double_val' member function within the class
    fun = &cl::double_val; 
    cl obj1(19), obj2(20); 

    // Access the value of 'val' for obj1 and obj2 using the pointer-to-data-member 'data'

    cout << "The value of object1: " << obj1.*data << "\n"; 
    cout << "The value of object2: " << obj2.*data << endl; 

    cout << "The double value is: " << endl;

    // Call the 'double_val()' function for obj1 and obj2 using the pointer-to-member-function 'fun'

    cout << (obj1.*fun)() << endl; 
    cout << (obj2.*fun)() << endl; 

    return 0;
}
