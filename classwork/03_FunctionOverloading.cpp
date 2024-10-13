#include<iostream>
using namespace std;
float volume(int s){
    return s*s*s;
}
float volume(int r, int h){
    return (3.14*r*r*h);
}
float volume(int l, int h, int b){
    return (l*h*b);
}
int main(){
    int s=10;
    int r=4;
    int l=20;
    int h=12;
    int b=3;
    int result_cube=volume(s);
    int result_cylinder=volume(r,h);
    int result_rectangle=volume(l,h,b);
    cout<<"The volume of the cube is: "<<result_cube<<endl;
    cout<<"The volume of the cylinder is: "<<result_cylinder<<endl;
    cout<<"The volume of the rectangle is: "<<result_rectangle<<endl;
return 0;
}