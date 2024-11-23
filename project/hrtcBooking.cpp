#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Bus {
    string busID;
    string driverName;
    string route;
    string timing;
    int seats[30]; // 0 = empty, 1 = booked

public:
    // Constructor
    Bus(string id, string driver, string r, string time) {
        busID = id;
        driverName = driver;
        route = r;
        timing = time;
        fill(begin(seats), end(seats), 0);  // initialize all seats to 0 (unbooked)
    }

    // Getter for Bus ID
    string getBusID() { return busID; }

    // Display bus details
    void displayBusDetails() {
        cout << "Bus ID: " << busID << ", Driver: " << driverName
             << ", Route: " << route << ", Timing: " << timing << endl;
    }

    // Book a seat
    bool bookSeat(int seatNumber) {
        if (seatNumber < 1 || seatNumber > 30 || seats[seatNumber - 1] == 1)
            return false;
        seats[seatNumber - 1] = 1;
        return true;
    }

    // Cancel a seat
    void cancelSeat(int seatNumber) {
        if (seatNumber >= 1 && seatNumber <= 30)
            seats[seatNumber - 1] = 0;
    }

    // Display available seats
    void displayAvailableSeats() {
        cout << "Available seats: ";
        for (int i = 0; i < 30; ++i) {
            if (seats[i] == 0) cout << i + 1 << " ";
        }
        cout << endl;
    }
};

class Passenger {
    string name;
    int seatNumber;
    string busID;

public:
    // Constructor
    Passenger(string n, int seat, string id) : name(n), seatNumber(seat), busID(id) {}

    // Display passenger details
    void displayPassengerDetails() {
        cout << "Name: " << name << ", Seat: " << seatNumber << ", Bus ID: " << busID << endl;
    }

    // Getter methods
    string getBusID() { return busID; }
    string getName() { return name; }
    int getSeat() { return seatNumber; }
};

class ReservationSystem {
    vector<Bus> buses;
    vector<Passenger> passengers;

public:
    // Add a new bus
    void addBus() {
        string id, driver, route, timing;
        cout << "Enter Bus ID, Driver Name, Route, and Timing: ";
        cin >> id >> driver >> route >> timing;
        buses.emplace_back(id, driver, route, timing);
    }

    // Display all available buses
    void displayAvailableBuses() {
        for (auto &bus : buses) {
            bus.displayBusDetails();
        }
    }

    // Book a ticket
    void bookTicket() {
        string id, name;
        int seat;
        cout << "Enter Bus ID: ";
        cin >> id;

        // Search for the bus by ID
        for (auto &bus : buses) {
            if (bus.getBusID() == id) {
                bus.displayAvailableSeats();  // Show available seats
                cout << "Enter your name and seat number to book: ";
                cin >> name >> seat;
                if (bus.bookSeat(seat)) {
                    passengers.emplace_back(name, seat, id);
                    cout << "Ticket booked successfully!" << endl;
                } else {
                    cout << "Seat already booked or invalid seat number." << endl;
                }
                return;
            }
        }
        cout << "Bus not found!" << endl;
    }

    // Cancel a ticket
    void cancelTicket() {
        string name;
        cout << "Enter passenger name: ";
        cin >> name;

        // Search for the passenger
        for (auto it = passengers.begin(); it != passengers.end(); ++it) {
            if (it->getName() == name) {
                string busID = it->getBusID();
                int seat = it->getSeat();
                // Cancel the seat
                for (auto &bus : buses) {
                    if (bus.getBusID() == busID) {
                        bus.cancelSeat(seat);
                        passengers.erase(it);  // Remove the passenger from the list
                        cout << "Ticket canceled successfully!" << endl;
                        return;
                    }
                }
            }
        }
        cout << "Passenger not found!" << endl;
    }

    // Display all passengers
    void displayPassengers() {
        for (auto &passenger : passengers) {
            passenger.displayPassengerDetails();
        }
    }
};

int main() {
    ReservationSystem system;
    int choice;

    while (true) {
        cout << "\n1. Add Bus\n2. View Buses\n3. Book Ticket\n4. Cancel Ticket\n5. View Passengers\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                system.addBus();  // Add a new bus
                break;
            case 2:
                system.displayAvailableBuses();  // View available buses
                break;
            case 3:
                system.bookTicket();  // Book a ticket
                break;
            case 4:
                system.cancelTicket();  // Cancel a ticket
                break;
            case 5:
                system.displayPassengers();  // View all passengers
                break;
            case 6:
                cout << "Exiting the system." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    
}
