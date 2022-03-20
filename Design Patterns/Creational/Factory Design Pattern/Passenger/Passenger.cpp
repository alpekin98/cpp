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
    void setType(char type){
        this->type = type;
    }
    char getType(){
        return this->type;
    }
    virtual void printSummary(){
        string passengerType;
        if(this->type == 'E'){
            passengerType = "Economy";
        } else if(this->type == 'F'){
            passengerType = "First Class";
        }
        cout << "Passanger Type: " + passengerType << endl;
        cout << "Full Name: " <<  this->fullname << endl;
        cout << "Age: " <<  this->age << endl;
        cout << "Seat Number: " <<  this->seatNumber << endl;
        cout << "Ticket Price: " <<  this->ticketPrice << endl;
    };
};

#endif