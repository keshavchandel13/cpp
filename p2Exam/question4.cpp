#include<iostream>
using namespace std;
void revString(string n){
    string name = n;
    int i = 0;
    int j= name.size()-1;

    while(i<j){
        char temp = name[j];
        name[j]=name[i];
        name[i]=temp;
        i++;
        j--;
    }
    cout<<name<<endl;

}
int main(){
    string name = "keshav";
    revString(name);
    cout<<"Enter your Name\n";
    cin>>name;
    revString(name);


return 0;
}