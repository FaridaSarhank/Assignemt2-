#include <iostream>
#include <stdexcept>
#include "Person.h"
#include "Time.h"
#include "Customer.h"
#include <stdexcept>
using namespace std;

template< class Bimbo >
class Queue
{
	Bimbo* stuff;
    int back;  
    int front;    
    int size;
	int max;      
	         

	public:
	
	Queue(int size) ;
    int getSize(); 
	bool isEmpty();
	Bimbo front() ;
	void push( Bimbo b );
    Bimbo pop(); 
};




