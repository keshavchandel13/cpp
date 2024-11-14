#include<iostream>
using namespace std;

int main(){
    string h ="sadbutsad";
    string n = "sad";
    string *p=&h;
    cout<< (*p)[3];
return 0;
}