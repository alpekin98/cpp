#include "Passenger.cpp"

class FirstClassPassenger: public Passenger
{
public:
    void printSummary();
};

void FirstClassPassenger::printSummary(){
    cout << "Passanger Type: First Class" << endl;
    cout << "Full Name: " <<  this->fullname << endl;
    cout << "Age: " <<  this->age << endl;
    cout << "Flight Number: " <<  this->flightNumber << endl;
    cout << "Seat Number: " <<  this->seatNumber << endl;
    cout << "Ticket Price: " <<  this->ticketPrice << endl;
}