#ifndef PASSENGER_CPP
#define PASSENGER_CPP

#include <iostream>
#include <string>

using namespace std;

class Passenger
{
protected:
    string fullname;
    short age;
    string seatNumber;
    int ticketPrice;

public:
    void setFullname(string fullname){
        this->fullname = fullname;
    }
    void setAge(short age){
        this->age = age;
    }
    void setSeatNumber(string seatNumber){
        this->seatNumber = seatNumber;
    }
    void setTicketPrice(short ticketPrice){
        this->ticketPrice = ticketPrice;
    }
    virtual void printSummary() = 0;
};

#endif