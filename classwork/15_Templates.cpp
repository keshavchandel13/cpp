// Generic Programming : a programming style that involves writing algorithms in terms of data types that are specified later

// Genric function: Generics is the idea to allow type (Integer, String, … etc and user-defined types) to be a parameter to methods, classes and interfaces.

/* Cases:
1) When the arguments are of same DataType
   --> Then we have to declare only 1 class & type

2) When the arguments are of different  DataType
   --> Then we have to declare classes according to the datatype (number of different datatype = number of classes we have to to declare)
*/

// Case 1: same data type argument
/*
#include<iostream>
using namespace std;
template<class T> T sum(T x, T y){
    return x+y;
}
int main(){
int a = 10, b= 5;
float c = 9.4, d = 3.1;
cout<<"The sum of the a+b: "<<sum(a,b)<<endl;
cout<<"The sum of the c+d: "<<sum(c,d)<<endl;

return 0;
}
*/

//Case 2: when the data type of the argument is different
#include<iostream>
using namespace std;
template <class T1, class T2> T2 sum(T1 &a, T2 &b){
   return a+b;
}
int main(){
int x= 10;
float y = 30.5;
cout<<"The sum of the x+y: "<<sum(x,y)<<endl;

return 0;
}