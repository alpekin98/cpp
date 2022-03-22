#ifndef DOMESTICFLIGHT_CPP
#define DOMESTICFLIGHT_CPP
#include "Flight.cpp"
#include "../Common.cpp"

string domesticDestinationArray[] = {
    "Ankara",
    "İstanbul",
    "İzmir",
    "Bursa",
    "Trabzon",
    "Gaziantep",
    "Manisa",
    "Muğla"
};

pair<string,string> domesticBrandMap[] = {
    make_pair("Pegasus","PGS"),
    make_pair("Turkish Airlines","THY"),
    make_pair("AnadoluJet","ADJ"),
};

class DomesticFlight : public Flight
{
public:
    Flight* prepareFlight(){
        pair<string,string> brand = domesticBrandMap[rand()%sizeof(domesticBrandMap)];
        this->setBrand(brand.first);
        this->setFlightNumber(brand.second + to_string(1000+rand()%10000));
        this->setFrom(fromArray[rand()%sizeof(fromArray)]);
        this->setDestination(domesticDestinationArray[rand()%sizeof(domesticDestinationArray)]);
        this->setCapacity({
            {'E',10*rand()%10},
            {'F',10*rand()%5}
        });
        this->setType('D');
        return this;
    }
};

#endif