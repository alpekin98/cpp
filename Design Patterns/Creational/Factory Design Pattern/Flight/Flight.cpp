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
    char type;

public:
    void setCapacity(unordered_map<char,short> capacity){
        this->capacity = capacity;
    }
    void setBrand(string brand){
        this->brand = brand;
    }
    void setFlightNumber(string flightNumber){
        this->flightNumber = flightNumber;
    }
    void setType(char type){
        this->type = type;
    }
    char getType(){
        return this->type;
    }
    void addPassenger(Passenger *passenger){
        if(this->capacity[passenger->getType()] == this->passengerList[passenger->getType()].size()){
            cout << ">>> Capacity full...";
        } else {
            this->passengerList[passenger->getType()].push_back(passenger);
        }
    }
};

#endif