#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger
{
    private:
        std::string firstName;
        std::string lastName;
        std::string seatNumber;
        std::string flightNumber;
        std::string classOfService;
    
    public:
        Passenger(std::string v, std::string w, std::string x, std::string y, std::string z)
        {
            firstName = v;
            lastName =  w;
            seatNumber = x;
            flightNumber = y;
            classOfService = z;
        }
        
         const std::string getFirstName();
         void setFirstName(const std::string &firstName);

         const std::string getLastName();
         void setLastName(const std::string &lastName);

         const std::string getSeatNumber();
         void setSeatNumber(const std::string &seatNumber);

         const std::string getFlightNumber();
         void setFlightNumber(const std::string &flightNumber);

         const std::string getClassOfService();
         void setClassOfService(const std::string &classOfService);
};


#endif