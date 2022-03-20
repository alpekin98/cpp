#ifndef ECONOMYPASSENGER_CPP
#define ECONOMYPASSENGER_CPP

#include "Passenger.cpp"

class EconomyPassenger: public Passenger
{
public:
    void printSummary(){
        cout << "Passanger Type: Economy" << endl;
        cout << "Full Name: " <<  this->fullname << endl;
        cout << "Age: " <<  this->age << endl;
        cout << "Seat Number: " <<  this->seatNumber << endl;
        cout << "Ticket Price: " <<  this->ticketPrice << endl;
    };
};

#endif