#include<iostream>
#include<vector>
#include<string>
using namespace std;

//------------------------------------->> Bus class
class Bus{
    string route,driverName,timing;
    int seats[42], busId;
    string pass = "hp22";
    Bus(string r, string d, string t, int s, int b){
        route = r;
        driverName = d;
        timing = t;
        fill(begin(seats), end(seats), 0); 
        busId = b;
    }
    void addBus(){ // Add bus function (access for admin only)
        string p;
        cout<<"$$$$$ ADMIN PORTAL $$$$$";
        cout<<"Enter the password"<<endl;
        cin>>p;
        if(pass == p){
            cout<<"Welcome Sir!\n";
            cout<<"Enter the route:\n"; cin>>route;
            cout<<"Enter the driver name:\n"; cin>>driverName;
            cout<<"Enter the bus timing:\n"; cin>>timing;
            cout<<"Enter the bus Id:\n"; cin>>busId;
        }
        else{
            cout<<"Wrong Password. Try again later"<<endl;
        }
    }
};
int main(){
    int choice;
    while(true){
        cout<<"******** Welcome to Himachal Road Transport Corporation ************";
        cout << "\n1. Add Bus\n"
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