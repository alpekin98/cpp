#include "Passenger/PassengerFactory.cpp"

int main(){
    srand(time(NULL));
    char typeArray[4] = {'E','E','F'};
    for(int i=0;i<10;i++){
        cout << "---------- >>> Passenger " << (i+1) << "----------" << endl;
        Passenger *passenger = PassengerFactory::createPassenger(typeArray[rand()%3]);
        passenger->printSummary();
    }
}