#ifndef PASSENGER_FACTORY_CPP
#define PASSENGER_FACTORY_CPP

#include "EconomyPassenger.cpp"
#include "FirstClassPassenger.cpp"
#include "../Common.cpp"

class PassengerFactory
{
public:
    ~PassengerFactory()
    {
        delete this;
    }

    static Passenger * createPassenger(char type){
        Passenger *passenger = NULL;
        short seatCount;
        switch (type){
            case 'E':{
                passenger = new EconomyPassenger;
                passenger->setTicketPrice(700 + rand()%300);
                seatCount = 40;
            } break;
            case 'F':{
                passenger = new FirstClassPassenger;
                passenger->setTicketPrice(2700 + rand()%1300);
                seatCount = 20;
            } break;
        }
        passenger->setSeatNumber(string(1,type) + to_string(1 + rand()%seatCount));
        passenger->setFullname(nameArray[rand()%sizeof(nameArray)]+" "+surnameArray[rand()%sizeof(surnameArray)]);
        passenger->setAge((10 + rand()%60));
        passenger->setType(type);
        return passenger;
    }
};

#endif 
