#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int choice;
    while(true){
        cout<<"******** Welcome to Himachal Road Transport Corporation ************";
        cout << "\n1.Add Bus\n"
        <<"2. View Buses\n"
        <<"3. Book Ticket\n"
        <<"4. Cancel Ticket\n"
        <<"5. View Passengers\n"
        <<"6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                return false;
                break;
            default:
                cout<<"Invalid input"<<endl;
                break;
        }

    }
    return 0;
} 