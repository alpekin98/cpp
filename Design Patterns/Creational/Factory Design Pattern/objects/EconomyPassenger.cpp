#include "Passenger.cpp"

class EconomyPassenger: public Passenger
{
public:
    void printSummary();
};

void EconomyPassenger::printSummary(){
    cout << "Passanger Type: Economy" << endl;
    cout << "Full Name: " <<  this->fullname << endl;
    cout << "Age: " <<  this->age << endl;
    cout << "Flight Number: " <<  this->flightNumber << endl;
    cout << "Seat Number: " <<  this->seatNumber << endl;
}