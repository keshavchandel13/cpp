#include <iostream> 
using namespace std;

/*
    **Namespace Concept**
    - A namespace provides a scope to the identifiers (variables, functions, classes, etc.).
    - It helps avoid name conflicts, especially in large projects or when using libraries with similar names.
*/

namespace first { // Namespace 'first' starts here
    void func() {
        // Function definition inside namespace 'first'
        cout << "hello from first\n"; 
    }
}

namespace second { // Namespace 'second' starts here
    void func() {
        // Function definition inside namespace 'second'
        cout << "Hello from second\n"; 
    }
}

int main() {
    // **Calling functions using fully qualified names**
    // By specifying the namespace explicitly, we avoid ambiguity if two namespaces have the same function name.

    first::func(); // Calls func() from the 'first' namespace
    second::func(); // Calls func() from the 'second' namespace

    return 0; // Returns 0 to indicate successful program execution
}
