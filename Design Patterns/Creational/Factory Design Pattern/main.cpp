#include "objects/EconomyPassenger.cpp"
#include "objects/FirstClassPassenger.cpp"
#include "PassengerFactory.cpp"

int main(){
    srand(time(NULL));
    char typeArray[4] = {'E','E','E','F'};
    for(int i=0;i<10;i++){
        cout << "---------- >>> Passenger " << (i+1) << "----------" << endl;
        Passenger *passenger = PassengerFactory::createPassenger(typeArray[rand()%4]);
        passenger->printSummary();
        delete passenger;
    }

}