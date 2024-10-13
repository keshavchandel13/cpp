#include<iostream>
using namespace std;
class base{
    protected: // IT is just like a private but it can be inherited
    int a=10;
    private: //It can't be inherited as it is private
    int b;

};
/*for a protected member:
                            Public Derivation      Private Derivation        Protected Derivation
   1)Private members        Not inherited           Not Inherited            Not Inherited
   2)Protected members         protected            Private                  Protected
   3)Public members            Public               Private                  Protected
*/
class derived: protected base{
   public:
   void display(){
    cout<<"The value of the a is: "<<a;
   }
};
int main(){
base b;
derived d;
d.display();

return 0;
}