#include <iostream>
#include "Person.h"
#include "Time.h"
using namespace std;


class Mechanic : public Person 
{
    
    private:
    int count ; 
    Time* appm;
    
    public: 
   Mechanic() ;
   int getcount () ;
   bool isAvailable (int hours , int minutes); // checks if an appoitment is avalible. by comparing times 
   void input (int hours, int minutes) ; // inputs hours and minutes into their respective slots 
};
