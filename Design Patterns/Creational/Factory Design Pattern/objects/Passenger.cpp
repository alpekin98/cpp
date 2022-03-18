#include <iostream>
#include <string>

using namespace std;

class Passenger
{
protected:
    string fullname;
    short age;
    string flightNumber;
    string seatNumber;
    int ticketPrice;

public:
    Passenger(string fullname, short age, string flightNumber, string seatNumber, int ticketPrice):
        fullname(fullname),
        age(age),
        flightNumber(flightNumber),
        seatNumber(seatNumber),
        ticketPrice(ticketPrice){}
    ~Passenger();
    void setFullname(string fullname);
    void setAge(short age);
    void setFlightNumber(string flightNumber);
    void setSeatNumber(string seatNumber);
    void setTicketPrice(short ticketPrice);
    string getFullname();
    short getAge();
    string getFlightNumber();
    string getSeatNumber();
    short getTicketPrice();
    virtual void printSummary();
};

Passenger::~Passenger()
{
}

void Passenger::setFullname(string fullname){
    this->fullname = fullname;
}

void Passenger::setAge(short age){
    this->age = age;
}

void Passenger::setFlightNumber(string flightNumber){
    this->flightNumber = flightNumber;
}

void Passenger::setSeatNumber(string seatNumber){
    this->seatNumber = seatNumber;
}

void Passenger::setTicketPrice(short ticketPrice){
    this->ticketPrice = ticketPrice;
}

string Passenger::getFullname(){
    return this->fullname;
}

short Passenger::getAge(){
    return this->age;
}

string Passenger::getFlightNumber(){
    return this->flightNumber;
}

string Passenger::getSeatNumber(){
    return this->seatNumber;
}

short Passenger::getTicketPrice(){
    return this->ticketPrice;
}