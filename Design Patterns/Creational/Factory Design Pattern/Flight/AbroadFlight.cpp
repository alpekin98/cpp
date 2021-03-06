#ifndef ABROADFLIGHT_CPP
#define ABROADFLIGHT_CPP
#include "Flight.cpp"
#include "../Common.cpp"

string abroadDestinationArray[] = {
    "Londra",
    "Berlin",
    "Tokyo",
    "Kyoto",
    "Toronto",
    "Washington DC",
    "Roma",
    "Barcelona",
    "Brugge",
    "Lizbon"
};

pair<string,string> abroadBrandMap[] = {
    make_pair("Turkish Airlines","THY"),
    make_pair("Qatar Airways","QAW"),
    make_pair("Lufthansa","LFT"),
};

class AbroadFlight : public Flight
{
public:
    Flight* prepareFlight(){
        srand(time(NULL));
        pair<string,string> brand = abroadBrandMap[rand()%(sizeof(abroadBrandMap)/sizeof(*abroadBrandMap))];
        this->setBrand(brand.first);
        this->setFlightNumber(brand.second + to_string(1000+rand()%10000));
        this->setFrom(fromArray[rand()%(sizeof(fromArray)/sizeof(*fromArray))]);
        this->setDestination(abroadDestinationArray[rand()%(sizeof(abroadDestinationArray)/sizeof(*abroadDestinationArray))]);
        this->setCapacity({
            {'E',(3*(1+rand()%10))},
            {'F',(3*(1+rand()%5))}
        });
        this->setType('A');
        return this;
    }
};

#endif