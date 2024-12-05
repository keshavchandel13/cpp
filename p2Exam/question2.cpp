#include<iostream>
using namespace std;

int main(){
    int num1,num2,x;
    try{
        cout<<"Enter the number 1: "<<endl;
        cin>>num1;
        cout<<"Enter the number 2: "<<endl;
        cin>>num2;
        cout<<"Enter 1 for add\nEnter 2 for subtract\nEnter 3 for multiply\nEnter 4 for divide\n";
        cin>>x;
        switch(x){
            case 1:
            cout<<"The sum is:"<<num1+num2<<endl;
            break; 
            case 2:
            cout<<"The subtraction of two number is:"<<num1-num2<<endl;
            break; 
            case 3:
            cout<<"The multiplication is:"<<num1*num2<<endl;
            break; 
            case 4:
            // To check denominator is zero
            if(num2==0){
                throw runtime_error("can't divide with zero");
            }else{
            cout<<"The division is:"<<num1/num2<<endl;
            }
            break; 
            // Default case for invalid operations
            default:
             throw 1;
        }
    } 
    catch (const exception &c){ //will catch divide with zero error
        cout<<c.what();
    }
    catch(...){ // will catch all the errors 
        cout<<"invalid operation"<<endl;
    }



return 0;
}