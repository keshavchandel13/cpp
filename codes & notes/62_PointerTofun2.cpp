#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void check(char *x, char *y,int(*cmp)(const char*,const char*)){
    cout<<"testing the equality\n";
    if( !((*cmp) (x,y)) ){
        cout<<"These strings are equal\n";
    }
    else{
        cout<<"Not equal\n";
    }
}
int main(){
    char k[] = "keshav";
    char c[] = "keshav";
    check(k,c,strcmp);

return 0;
}