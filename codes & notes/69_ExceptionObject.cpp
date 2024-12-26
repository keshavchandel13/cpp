#include <iostream>
using namespace std;

class Error {
public:
    string message;
    Error(string m):message(m){}
  
};

int main() {
    try{
        throw Error("this is error");
    }
    catch (const Error &e){
        cout<<e.message;
    }
    return 0;
}
