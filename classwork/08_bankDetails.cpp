#include<iostream>
using namespace std;
class bankdetail{
    string name,acc_type;
    int acc_num;
    double balance;
      public:
        bankdetail(){
            acc_type="Saving";
            balance=0.00;
        }
        void getData(){
            cout<<"Enter the Name of the person"<<endl;
            cin>>name;
            cout<<"Enter the type of account"<<endl;
            cin>>acc_type;
            cout<<"Enter the account number"<<endl;
            cin>>acc_num;
        }
        void deposit(){
            double amount;
            cout<<"Enter the amount you want to deposit"<<endl;
            cin>>amount;
            cout<<"You deposited "<<amount<<"/ only"<<endl;
            balance=balance+amount;
            cout<<"Your current bank balance is: "<<balance<<endl;
        }
        void withDraw(){
            double amount;
            cout<<"Enter the amount you want to withdwaw"<<endl;
            cin>>amount;
            cout<<"You want to withdraw "<<amount<<"/ only"<<endl;
            if(balance>=100){
               balance= balance-amount;
                cout<<"Your current bank balance is: "<<balance<<endl;
            }
            else{
                cout<<"You are at minimun balance"<<endl;
            }
        }
        void display(){
            cout<<"********Welcome to CHIT FUND Bank**********"<<endl;
            cout<<"The name of the customer is: "<<name<<endl;
            cout<<"The account type of the customer is: "<<acc_type<<endl;
            cout<<"The current amount is : "<<balance<<endl;
        }

};
static int size= 4;
int main(){
 bankdetail c1[size];
int  choice;

 for(int i=0;i<size;i++){
    
    cout<<"Enter the detail of customer"<<i+1<<endl;
    c1[i].getData();
    cout<<"\n\n";
    cout<<"Enter 1 to deposit\n"
        <<"Enter 2 to withdraw\n"
        <<"Enter 3 to get customer detail"<<endl;
    cin>>choice;
    switch(choice){
        case 1:{
            cout<<"You entered option deposit"<<endl;
            c1[i].deposit();
            break;
        }
        case 2:{
             cout<<"You entered option withdraw"<<endl;
            c1[i].withDraw();
            break;
        }
        case 3:{
             cout<<"You entered option get customer detail"<<endl;
            c1[i].display();
            break;
        }
        default:{
            cout<<"No choice selected"<<endl;
            break;
        }
    }
 }



return 0;
}