#include<iostream>
using namespace std;

int main(){
    int numi,denomi,div;
    cout<<"Enter the value of the numinator and denominator: "<<endl;
    cin>>numi>>denomi;
    try{
        if(denomi==0){
            throw runtime_error("can't divide with zero");
        }
        div = numi/denomi;
        cout<<div<<endl;
    }
    catch(const exception &c){
        cout<<c.what();
    }
    catch(...){
        cout<<"something went wrong"<<endl;
    }
    cout<<"code after exception"<<endl;


return 0;
}