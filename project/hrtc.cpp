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
    // bus detail function
    void displayBusDetails(){
        cout<<"\nBus Id: "<<busId
            <<"\nDriver Name: "<<driverName
            <<"\nRoute: "<<route
            <<"\nTiming: "<<timing;
    }
    bool bookSeat(int seatNumber){
        if(seatNumber>1 || seatNumber<42 || seats[seatNumber-1]==1){
            return false;
        }
        seats[seatNumber-1] = 1;
        return true;
    }
    bool cancelSeat(int seatNumber){
        if(seats[seatNumber-1]==1){
            seats[seatNumber-1] = 0;
            return true;
        }
    }
    void displayAvailableSeats(){
        cout<<"\nAvailable seats: ";
        for(int i=0;i<42;i++){
            if(seats[i]==0){
                cout<<i+1<<"\t";
            }
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