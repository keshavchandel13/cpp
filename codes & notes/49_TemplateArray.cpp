#include <iostream>
using namespace std;

// Template for Array class
template <typename T>
class Array {
private:
    T* arr;
    int size;

public:
    // Constructor
    Array(int s) {
        size = s;
        arr = new T[size];
    }

    // Destructor
    ~Array() {
        delete[] arr;
    }

    // Function to set value at a specific index
    void setValue(int index, T value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        } else {
            cout << "Index out of bounds" << endl;
        }
    }

    // Function to get value at a specific index
    T getValue(int index) const {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            cout << "Index out of bounds" << endl;
            return T(); // Return default value
        }
    }

    // Function to display the array
    void display() const {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Creating an array of integers
    Array<int> intArray(5);
    for (int i = 0; i < 5; ++i) {
        intArray.setValue(i, i + 1); // Set values 1 to 5
    }
    intArray.display();

    // Creating an array of doubles
    Array<double> doubleArray(3);
    doubleArray.setValue(0, 1.1);
    doubleArray.setValue(1, 2.2);
    doubleArray.setValue(2, 3.3);
    doubleArray.display();

    return 0;
}
