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
    char type;
public:
    virtual void setFullname(string fullname){
        this->fullname = fullname;
    }
    virtual void setAge(short age){
        this->age = age;
    }
    virtual void setSeatNumber(string seatNumber){
        this->seatNumber = seatNumber;
    }
    virtual void setTicketPrice(short ticketPrice){
        this->ticketPrice = ticketPrice;
    }
    virtual void setType(char type){
        this->type = type;
    }
    virtual char getType(){
        return this->type;
    }
    virtual void printSummary() = 0;
};

#endif