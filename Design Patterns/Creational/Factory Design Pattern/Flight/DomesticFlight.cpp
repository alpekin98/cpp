#ifndef DOMESTICFLIGHT_CPP
#define DOMESTICFLIGHT_CPP
#include "Flight.cpp"
#include "../Common.cpp"

string destinationArray[] = {
    "Ankara",
    "İstanbul",
    "İzmir",
    "Bursa",
    "Trabzon",
    "Gaziantep",
    "Manisa",
    "Muğla"
};

pair<string,string> brandMap[] = {
    make_pair("Pegasus","PGS"),
    make_pair("Turkish Airlines","THY"),
    make_pair("AnadoluJet","ADJ"),
};

class DomesticFlight : public Flight
{
public:
    DomesticFlight(){
        pair<string,string> brand = brandMap[rand()%sizeof(brandMap)];
        this->setBrand(brand.first);
        this->setFlightNumber(brand.second + to_string(1000+rand()%10000));
        this->setFrom(fromArray[rand()%sizeof(fromArray)]);
        this->setDestination(destinationArray[rand()%sizeof(destinationArray)]);
        this->setCapacity({
            {'E',10*rand()%10},
            {'F',10*rand()%5}
        });
        this->setType('D');
    }
};

#endif