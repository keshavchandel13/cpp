#include<iostream>
using namespace std;
class CBase{
    public:
    virtual void vFunction()=0;
    virtual ~CBase(){
        cout<<"base ";
    }

};
class CDerived:public CBase{
    public:
    void vFunction() override{
        cout<<"No legacy is so rich as honesty "<<endl;
    }
    ~CDerived(){
        cout<<"derived ";
    }
};

int main(){
    CBase *ptr;
    CDerived obj;
    ptr = &obj;
    ptr->vFunction();
    delete ptr;


return 0;
}