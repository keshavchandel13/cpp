#include<iostream>
#include<string.h>
using namespace std;
class str{
        string s1;
        string s2;
   public:
    
     } str(){
        cout<<"Default constructor is invoked"<<endl;
          
         s2="Well done";
     ~str(){
          cout<<"Default destructor is invoked"<<endl;
     }
     void concatenate(){
    s1=s2;
        cout<<s1<<" "<<s2<<endl;
     }

};
int main(){
    str o1;
    o1.concatenate();


return 0;
}