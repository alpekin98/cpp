#ifndef FLIGHT_CPP
#define FLIGHT_CPP

#include "../Passenger/Passenger.cpp"
#include <string>
#include <vector>
#include <unordered_map>

class Flight
{

private:
    unordered_map<char,short> capacity;
    unordered_map<char,vector<Passenger*>> passengerList;
    string brand;
    string flightNumber;
    string from;
    string destination;
    char type;

public:
    void setCapacity(unordered_map<char,short> capacity){ this->capacity = capacity; }
    void setBrand(string brand){ this->brand = brand; }
    void setFlightNumber(string flightNumber){ this->flightNumber = flightNumber; }
    void setType(char type){ this->type = type; }
    void setFrom(string from) { this->from = from; }
    void setDestination(string destination) { this->destination = destination; }

    char getType(){ return this->type; }
    short getCapacity(char type){ return this->capacity[type]; }
    string getBrand(){ return this->brand; }
    string getFlightNumber(){ return this->flightNumber; }
    string getDestination(){ return this->destination; }
    string getFrom(){ return this->from; }
    vector<Passenger*> getPassengerList(char type){ return this->passengerList[type]; }
    
    void addPassenger(Passenger *passenger){
        if(capacity[passenger->getType()] == this->passengerList[passenger->getType()].size()){
            cout << ">>> Capacity full...";
        } else {
            this->passengerList[passenger->getType()].push_back(passenger);
        }
    }

    virtual Flight * prepareFlight() = 0;

    void printFlightDetails(){
        cout << "Printing flight details..." << endl;
        cout << "Flight Number: " << this->getFlightNumber() << endl;
        cout << "Brand: " << this->getBrand() << endl;
        cout << "Route: " + this->getFrom() + " - " + this->getDestination() << endl;
        cout << "Type: " << this->getType() << endl;
        for(short i=0;i<sizeof(passengerTypeArray);i++){
            cout << "Capacity Type: " << to_string(passengerTypeArray[i]) << endl;
            cout << "Capacity Size: " << to_string(this->capacity[passengerTypeArray[i]]) << endl;
        }
        for(short i=0;i<sizeof(passengerTypeArray);i++){
            cout << "Passenger Type: " << to_string(passengerTypeArray[i]) << endl;
            for(Passenger *passenger : this->getPassengerList(passengerTypeArray[i])) {
                passenger->printSummary();
            }
        }
    }
};

#endif