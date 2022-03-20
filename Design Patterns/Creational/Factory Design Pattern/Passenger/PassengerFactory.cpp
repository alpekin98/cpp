#include "EconomyPassenger.cpp"
#include "FirstClassPassenger.cpp"

class PassengerFactory
{
public:
    ~PassengerFactory()
    {
        delete this;
    }

    static Passenger * createPassenger(char type){
        string nameArray[] = {
            "Trym"
            "Brokkr",
            "Sigmundr",
            "Heimdallr",
            "Jörmungandr",
            "Gunnarr",
            "Frigg",
            "Hildr",
            "Sigrun",
            "Huld",
            "Gudrun",
            "Elli",
            "Odin",
            "Heidrun",
            "Sif"
        };

        string surnameArray[] = {
            "Brynhildr"
            "Sigrún",
            "Urd",
            "Tyr",
            "Grid",
            "Sindri",
            "Urd",
            "Týr",
            "Borghild",
            "Svanhildr",
            "Sanjaya",
            "Astarte",
            "Aristaios",
            "Tadg",
            "Cassiel"
        };
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
        passenger->setFullname(nameArray[rand()%14]+" "+surnameArray[rand()%14]);
        passenger->setAge((10 + rand()%60));
        passenger->setType(type);
        return passenger;
    }
};
