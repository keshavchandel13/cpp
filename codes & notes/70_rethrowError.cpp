#include<iostream>
using namespace std;
void divide(int a, int b){
    try{
    if(b==0){
        throw "Divide error\n";
    }
    }
    catch (...){
        cout<<"There is error somewhere in division\n";
        throw;
    }

}
int main(){
    try{
        divide(10,0);
    }
    catch(const char *e){
        cout<<e;
    }

return 0;
}