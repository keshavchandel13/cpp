
#include <iostream>
using namespace std;
// user definedd dataType that is class

class Distance{
    int kilo;
    int meter;
    public:
    Distance(int km,int m):kilo(km),meter(m){}
    int totalMeters(){
        return kilo*meter;
    }
    bool operator<(Distance &d){
        return this->totalMeters()<d.totalMeters();
    }
     friend ostream& operator<<(ostream& out, const Distance& d) {
        out << d.kilo << "km," << d.meter << "m";
        return out;
    }
};



// Function for sorting
template<class T>
void sort(T arr[],int size){
    for(int i = 0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if (arr[j+1] < arr[j]){
                T temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function for display
template <class T>
void display(T arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main() {
    int intArr[] = {5, 3, 8, 1};
    sort(intArr,4);
    display(intArr,4);

    string name[] = {"keshav","rahul","rohit","mohit"};
    sort(name,4);
    display(name,4);

    Distance userArray[]= {Distance(1,22),Distance(10,22),Distance(0,22),Distance(5,33)};
    sort(userArray,4);
    display(userArray,4);

    
    

    return 0;
}