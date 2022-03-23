#ifndef FLIGHT_CPP
#define FLIGHT_CPP

#include "../Passenger/Passenger.cpp"
#include <string>
#include <vector>
#include <map>
class Flight
{

private:
    map<char,short> capacity;
    map<char,vector<Passenger*>> passengerList;
    string brand;
    string flightNumber;
    string from;
    string destination;
    char type;

public:
    void setCapacity(map<char,short> capacity){ this->capacity = capacity; }
    void setBrand(string brand){ this->brand = brand; }
    void setFlightNumber(string flightNumber){ this->flightNumber = flightNumber; }
    void setFrom(string from) { this->from = from; }
    void setDestination(string destination) { this->destination = destination; }
    void setType(char type){ this->type = type; }

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
        string flightType = this->getType() == 'A' ? "Abroad" : "Domestic";
        cout << "--------------------------------------------" << endl;
        cout << "Printing flight details..." << endl;
        cout << "Flight Number: " << this->getFlightNumber() << endl;
        cout << "Brand: " << this->getBrand() << endl;
        cout << "Route: " + this->getFrom() + " - " + this->getDestination() << endl;
        cout << "Type: " << flightType << endl << endl;
        for(short i=0;i<sizeof(passengerTypeArray);i++){
            string passengerType = passengerTypeArray[i] == 'E' ? "Economy" : "First Class";
            cout << "Capacity Type: " << passengerType << endl;
            cout << "Capacity Size: " << this->capacity[passengerTypeArray[i]] << endl;
        }
        cout << endl;
        for(short i=0;i<sizeof(passengerTypeArray);i++){
            string passengerType = passengerTypeArray[i] == 'E' ? "Economy" : "First Class";
            cout << endl << "@@@@@@@@@@@@@@@@ " << passengerType << " Passengers " << "@@@@@@@@@@@@@@@@" << endl << endl;
            for(int j=0;j<this->getPassengerList(passengerTypeArray[i]).size();j++){
                Passenger *passenger = this->getPassengerList(passengerTypeArray[i]).at(j);
                cout << "============== Passenger " << j+1 << " ==============" << endl;
                passenger->printSummary();
            }
            // for(Passenger *passenger : this->getPassengerList(passengerTypeArray[i])) {
            // }
        }
    }
};

#endif