#include <iostream>
#include "Person.h"
#include "Time.h"
using namespace std;

class Customer
{
    
private: 
int mechid ;
Time app ;
string mechname; 

public: 
Customer() ;
void setmechid (int m) ;
int getmechid ()
void setmechname (string me) ;
string getmechname () ;
void setTime (int h , int m); // creates the time to be placed for apooitment check
Time getTime ();
bool operator <(Customer c) ;  // compares times for appointment
bool operator >(Customer c ) ; // compares times for appointment
bool operator ==(Customer c)  ;// compares times for appointment
void print ();



    
};
