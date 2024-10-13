#include <iostream>
using namespace std;

void callByPointer(int *a) {
     cout << "Value after call by pointer: " << *a << endl;
    *a = *a + 10;
}
void callByRefrence(int &b){
    b=b+50;
}

int main() {
    int num = 20;
    int num2 = 10;
    callByPointer(&num);
    cout << "Value after call by pointer: " << num << endl;  // Output will be 30
    callByRefrence(num2);
    cout << "Value after call by pointer: " << num2 << endl;
    return 0;
}
