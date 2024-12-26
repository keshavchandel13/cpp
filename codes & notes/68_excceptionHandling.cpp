#include<iostream>
#include<exception>
using namespace std;
class Myerror:public exception{
   public:
   const char* what() const  throw(){
    return "There is error\n";
   }
};
int main(){
    try{
        throw Myerror();
    }
    catch(const Myerror &e){
        cout<<e.what();
    }

return 0;
}