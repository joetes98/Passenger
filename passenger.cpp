#include "passenger.h"


//getter and setter for firstName
const std::string Passenger::getFirstName()
{
    return firstName;
}

void Passenger::setFirstName(const std::string &firstName)
{
    this->firstName = firstName;
}


//getter and setter for lastName
const std::string Passenger::getLastName()
{
    return lastName;
}

void Passenger::setLastName(const std::string &lastName)
{
    this->lastName = lastName;
}


//getter and setter for classOfService
const std::string Passenger::getClassOfService()
{
    return classOfService;
}

void Passenger::setClassOfService(const std::string &classOfService)
{
    this->classOfService = classOfService;
}

//getter and setter for seatNumber
const std::string Passenger::getSeatNumber()
{
    return seatNumber;
}

void Passenger::setSeatNumber(const std::string &seatNumber)
{
    this->seatNumber = seatNumber;
}

//getter and setter for flightNumber
const std::string Passenger::getFlightNumber()
{
    return flightNumber;
}

void Passenger::setFlightNumber(const std::string &flightNumber)
{
    this->flightNumber = flightNumber;
}