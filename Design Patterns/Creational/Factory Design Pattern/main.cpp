#include "Passenger/PassengerFactory.cpp"
#include "Flight/FlightFactory.cpp"
#include "Common.cpp"

int main(){
    FlightFactory::createFlight('D')->printFlightDetails();
    FlightFactory::createFlight('A')->printFlightDetails();
}