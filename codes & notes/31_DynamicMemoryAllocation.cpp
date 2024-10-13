#include<iostream>
#include<string>
using namespace std;
class StringArray{
    string *array;
    int size;
    public:
    StringArray(int n){
        size = n;
        array = new string[size];
    }
    StringArray(StringArray &obj){
        size = obj.size;
        array = new string[size];
        for(int i=0;i<size;i++){
            array[i]=obj.array[i];
        }       

    }
    void setData(){
        cout<<"Enter the strings in the array: "<<endl;
        for(int i=0;i<size;i++){
            cout<<"Enter the "<<i+1<<" string"<<endl;
            cin>>array[i];
        }
    }
    void display(){
        cout<<"The strings in the array is: "<<endl;
        for(int i=0;i<size;i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    int size;
cout<<"Enter the size of the array: "<<endl;
cin>>size;
StringArray arr(size);
arr.setData();
arr.display();
StringArray copyArr = arr;
copyArr.display();
return 0;
}