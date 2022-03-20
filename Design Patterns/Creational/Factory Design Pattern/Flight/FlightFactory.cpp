#ifndef FLIGHTFACTORY_CPP
#define FLIGHTFACTORY_CPP

#include "Flight.cpp"
#include "DomesticFlight.cpp"
#include "AbroadFlight.cpp"

class FlightFactory
{
private:
    /* data */
public:
    FlightFactory(/* args */);
    void createFlight(char type){
        Flight *flight = NULL;
        if(type == 'D'){
            flight = new DomesticFlight;
        } else if (type == 'A'){
            flight = new AbroadFlight;
        }
    };
};

#endif