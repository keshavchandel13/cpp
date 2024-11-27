#include<iostream>
#include<vector>
#include<string>
using namespace std;

//------------------------------------->> Bus class
class Bus {
    string route, driverName, timing;
    int seats[42], busId;
public:
    Bus(string r, string driver, string time, int id) {
        route = r;
        driverName = driver;
        timing = time;
        fill(begin(seats), end(seats), 0); 
        busId = id;
    }

    // Bus detail function
    void displayBusDetails() { 
        cout << "\nBus Id: " << busId
             << "\nDriver Name: " << driverName
             << "\nRoute: " << route
             << "\nTiming: " << timing << endl;
    }
    bool bookSeat(int seatNumber) { // Function to book a seat
        if (seatNumber < 1 || seatNumber > 42 || seats[seatNumber - 1] == 1) {
            return false;
        }
        seats[seatNumber - 1] = 1;
        return true;
    }
    bool cancelSeat(int seatNumber) { // Function to cancel the seat
        if (seatNumber < 1 || seatNumber > 42 || seats[seatNumber - 1] == 0) {
            return false;
        }
        seats[seatNumber - 1] = 0;
        return true;
    }
    void displayAvailableSeats() { // Function to display available seats
        cout << "\nAvailable seats: ";
        for (int i = 0; i < 42; i++) {
            if (seats[i] == 0) {
                cout << i + 1 << "\t";
            }
        }
        cout << endl;
    }
    int getBusID() { return busId; }
};

//--------------------------->> Passenger Class
class Passenger {
    string name;
    int busId, seatNumber;
public:
    Passenger(string n, int b, int s) : name(n), busId(b), seatNumber(s) {} // Constructor to initialize values
    string getName() { return name; } // Function to get name
    int getBusID() { return busId; } // Function to get busId
    int getSeat() { return seatNumber; } // Function to get passenger seat number
    void displayPassengerDetails() {
        cout << "Name: " << name << ", Seat: " << seatNumber << ", Bus ID: " << busId << endl;
    }
};

// --------------------------->> Reservation System Class
class ReservationSystem {
    vector<Bus> buses;
    vector<Passenger> passengers;
    string pass = "hp22";
public:
    void addBus() { // Add bus function (access for admin only)
        int busId;
        string p, route, driverName, timing;
        cout << "$$$$$ ADMIN PORTAL $$$$$" << endl;
        cout << "Enter the password: ";
        cin >> p;
        if (pass == p) {
            cout << "################# Welcome Sir ################!\n";
            cout << "Enter the route: ";
            cin >> route;
            cout << "Enter the driver name: ";
            cin >> driverName;
            cout << "Enter the bus timing: ";
            cin >> timing;
            cout << "Enter the bus Id: ";
            cin >> busId;
            buses.emplace_back(route, driverName, timing, busId); // Adding the data in the vector
        } else {
            cout << "Wrong Password. Try again later" << endl;
        }
    }

    // Display all available buses from vector
    void displayAvailableBuses() {
        if (buses.empty()) {
            cout << "Oops! No bus is available" << endl;
        } else {
            cout << "Available buses:" << endl;
            for (auto &bus : buses) {
                bus.displayBusDetails();
            }
        }
    }

    // Book ticket
    void bookTicket() {
        string name;
        int id, seat;
        cout << "Enter the bus id: ";
        cin >> id;
        for (auto &bus : buses) {
            if (bus.getBusID() == id) {
                bus.displayAvailableSeats();
                cout << "Enter your name: ";
                cin >> name;
                cout << "Enter the seat number: ";
                cin >> seat;
                if (bus.bookSeat(seat)) {
                    passengers.emplace_back(name, id, seat);
                    cout << "Seat booked successfully!\n";
                } else {
                    cout << "Seat already booked or invalid seat number.\n";
                }
                return;
            }
        }
        cout << "Can't find bus" << endl;
    }

    // Cancel ticket
    void cancelTicket() {
        string name;
        int id, seat;
        cout << "Enter the bus id: ";
        cin >> id;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your seat number: ";
        cin >> seat;

        for (auto &bus : buses) {
            if (bus.getBusID() == id) {
                if (bus.cancelSeat(seat)) {
                    for (auto it = passengers.begin(); it != passengers.end(); ++it) {
                        if (it->getBusID() == id && it->getSeat() == seat && it->getName() == name) {
                            passengers.erase(it);
                            cout << "Ticket canceled successfully.\n";
                            return;
                        }
                    }
                } else {
                    cout << "Invalid seat number or seat not booked.\n";
                }
                return;
            }
        }
        cout << "Bus not found.\n";
    }

    // Display all passengers
    void displayPassengers() {
        if (passengers.empty()) {
            cout << "No passengers found." << endl;
        } else {
            cout << "Passenger List:" << endl;
            for (auto &passenger : passengers) {
                passenger.displayPassengerDetails();
            }
        }
    }
};

int main() {
    ReservationSystem system;
    int choice;
    while (true) {
        cout << "\n******** Welcome to Himachal Road Transport Corporation ************" << endl;
        cout << "\n1. Add Bus\n"
             << "2. View Buses\n"
             << "3. Book Ticket\n"
             << "4. Cancel Ticket\n"
             << "5. View Passengers\n"
             << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                system.addBus();
                break;
            case 2:
                system.displayAvailableBuses();
                break;
            case 3:
                system.bookTicket();
                break;
            case 4:
                system.cancelTicket();
                break;
            case 5:
                system.displayPassengers();
                break;
            case 6:
                cout << "Thank you for using the system!" << endl;
                return 0;
            default:
                cout << "Invalid input. Please try again." << endl;
                break;
        }
    }
    return 0;
}
