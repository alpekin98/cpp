#ifndef FLIGHTFACTORY_CPP
#define FLIGHTFACTORY_CPP

#include "Flight.cpp"
#include "DomesticFlight.cpp"
#include "AbroadFlight.cpp"
#include "../Passenger/PassengerFactory.cpp"

class FlightFactory
{
private:
    /* data */
public:
    FlightFactory(/* args */);
    static Flight *  createFlight(char type){
        Flight *flight = NULL;
        if(type == 'D'){
            flight = new DomesticFlight;
            flight->prepareFlight();
            for(short i=0;i<sizeof(passengerTypeArray);i++){
                for(short j=0;j<flight->getCapacity(passengerTypeArray[i]);j++){
                    flight->addPassenger(PassengerFactory::createPassenger(passengerTypeArray[i]));
                }
            }
        } else if (type == 'A'){
            flight = new AbroadFlight;
            flight->prepareFlight();
            for(short i=0;i<sizeof(passengerTypeArray);i++){
                for(short j=0;j<flight->getCapacity(passengerTypeArray[i]);j++){
                    flight->addPassenger(PassengerFactory::createPassenger(passengerTypeArray[i]));
                }
            }
        }
        return flight;
    };
};

#endif