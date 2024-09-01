#include <iostream>
#include "passenger.h"

int main()
{
    Passenger passenger1("Joe", "Tesoriero", "14B", "QF103", "Economy");

    std::cout << passenger1.getFirstName() << " " << passenger1.getLastName()
        << " " << passenger1.getSeatNumber() << " " << passenger1.getFlightNumber()
        << " " << passenger1.getClassOfService() << std::endl;

    passenger1.setFirstName("Anthony");
    passenger1.setLastName("Smith");
    passenger1.setSeatNumber("10A");
    passenger1.setFlightNumber("GH204");
    passenger1.setClassOfService("First Class");

    std::cout << passenger1.getFirstName() << " " << passenger1.getLastName()
        << " " << passenger1.getSeatNumber() << " " << passenger1.getFlightNumber()
        << " " << passenger1.getClassOfService() << std::endl;

    return 0;
}