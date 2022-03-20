#ifndef FIRSTCLASSPASSENGER_CPP
#define FIRSTCLASSPASSENGER_CPP

#include "Passenger.cpp"

class FirstClassPassenger: public Passenger
{
public:
    void printSummary(){
        cout << "Passanger Type: First Class" << endl;
        cout << "Full Name: " <<  this->fullname << endl;
        cout << "Age: " <<  this->age << endl;
        cout << "Seat Number: " <<  this->seatNumber << endl;
        cout << "Ticket Price: " <<  this->ticketPrice << endl;
    };
};

#endif