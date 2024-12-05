// Template with multiple arguments:
#include<iostream>
using namespace std;
template <class Type>
int findNum(Type *arr, Type num, int size){
    for(int i=0;i<size;i++){
        if(arr[i]==num){return i+1;}
    } return -1;    

}
int main(){
    char charArr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    char ch = 'c';
    int intArr[] = {12,13,14,15,16};
    int in = 16;
    long longArr[] = {22l,23l,24l,25l,26l};
    long lo = 0l;
    double doubleArr[] = {32,33,34,35,36};
    double dou = 33;

    cout<<"number at index: "<<findNum(charArr,ch,6)<<endl;
    cout<<"number at index: "<<findNum(intArr,in,5)<<endl;
    cout<<"number at index: "<<findNum(longArr,lo,5)<<endl;
    cout<<"number at index: "<<findNum(doubleArr,dou,5)<<endl;



    return 0;
}