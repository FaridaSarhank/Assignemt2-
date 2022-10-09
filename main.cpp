#include <iostream>
#include "Person.h"
#include "Time.h"
#include "Customer.h"
#include <stdexcept>
using namespace std;

Person::Person()
{
    name="" ;
    ID= 0 ; 
    age=0;
}

void Person::setname (string n)
{
    name=n ;
}

string Person:: getname ()
{
    return name ;
}

void Person:: setID (int id )
{
    ID=id;
}

int Person::getID ()
{
    return ID;
}

void Person::setage (int a)
{
    age=a;
}

int Person::getage ()
{
    return age;
}

void Person:: print ()

{
    cout<<name<< endl; 
    cout<< ID<< endl; 
    cout<< age<< endl ;
}




Customer::Customer()
{
mechid=0 ; 
app.hours=0 ; 
app.minutes=0 ; 
mechname=""; 
}  

void Customer::setmechid (int m)
{
    mechid=m ;
}

int Customer::getmechid ()
{
    return mechid;
}

void Customer::setmechname (string me)
{
    mechname=me ;
}

string Customer:: getmechname ()
{
    return mechname;
}
   
   void Customer:: setTime (int h , int m)
{
    app.hours= h ;
    app.minutes= m ; 
}

Time Customer:: getTime ()
{
    return app;
} 

bool Customer::operator <(Customer c)  
{
    if (app.hours < c.getTime().hours )
    {
        return true ; 
    }
    if ((app.hours==c.getTime().hours)&&(app.minutes<c.getTime().minutes))
    
    {
        return true ; 
    }
    
    else 
   { 
       return false ;
       
   } 
    
}

bool Customer:: operator >(Customer c )  
{
    if (app.hours>c.getTime().hours)
    {
        return true ; 
    }
    if ((app.hours==c.getTime().hours)&&(app.minutes>c.getTime().minutes))
    
    {
        return true ; 
    }
    
    else 
   { 
       return false ;
       
   } 
    
}

bool Customer::operator ==(Customer c)  
{
    
    if ((app.hours==c.getTime().hours)&&(app.minutes==c.getTime().minutes))
    
    {
        return true ; 
    }
    
    else 
   { 
       return false ;
       
   } 
    
}

void Customer::print ()

{
     
    cout<<getname()<< " of age"<< getage() << " of ID" << getID()<<" has an appointemnt with"<< getmechname()<< " of ID"<<"at"<<app.hours<< ":" << app.minutes<< endl ; 
    
}

    
Mechanic::Mechanic()
    {
        count=0 ; 
        appm= new Time [50] ;
    }

  Mechanic::  int getcount ()
   {
       return count ; 
   }
   
    
    bool  Mechanic::isAvailable (int hours , int minutes)
    {
        for (int i=0; i<count ; i++ )
        {
            if ((hours==appm[i].hours)&& (minutes==appm[i].minutes))
           { 
              return false ; 
               
               
           }
        }
        
       return true ;  
    }
    
   void  Mechanic:: input (int hours, int minutes) 
   {
      appm [count].hours= hours ; 
      appm [count].minutes= minutes ; 
      count++ ; 
   }
    





class No : public logic_error 
{
    public: 
        No():
            logic_error("Sorry Queue is empty ") {
        }
        string what() 
        {
            return " Sorry Queue is empty";
        }
    
};

	         

	
	Queue::Queue(int size)
	{
		max = size;
		stuff = new Bimbo[max];
		front = -1;  
		back = 0;
		this->size = 0;
	}

	int Queue::getSize()
	{
		return size;
	}

	bool 	Queue:: isEmpty()
	{
		return size == 0;
	}
	
	Bimbo 	Queue::front()
	{
		if(front == -1)
		{
        cout<<"Queue empty "<<endl;
		return 0 ; 
		}
		return stuff[front];
	}
	
	void 	Queue:: push( Bimbo b )
	{
			if(size == max){
                cout<<"Queue  full "<<endl;
				return;
	}
			
			if(front == -1){
				front = 0;
			}
			
			stuff[back] = b;
            back++;
			size++;
	}
	

	Bimbo 	Queue::pop()
	{			
		if(front == -1)
		{
            cout<<"Queue is empty "<<endl;
			throw No() ; 
		}	
		Bimbo temp = suff[front];
        for (int i = 0; i <size; i++)
        { 
                stuff[i] = stuff[i + 1]; 
        }
        back--;
        size--;
		if(size == 0)
		{
			front = -1;
			back = 0;
		}
		return temp;
	}



int main()
{
    
    Mechanic mech1; 
    Mechanic mech2 ; 
    Mechanic mech3 ; 
  
    
    Mechanic Mcar [3] ; 
    
      
    Mcar[0].setname("Fawzy");
    Mcar[0].setID (8967);
    Mcar[0].setage (45);
    
    Mcar[1].setname("Bibo");
    Mcar[1].setID (7130);
    Mcar[1].setage (67);
    
   Mcar[2].setname("moody");
   Mcar[2].setID (5688);
   Mcar[2].setage (78);
    
   int countc ; 
   cout<< " how many customers are you booking for" ; 
   cin >> countc ; 
  
   Customer*Car= new Customer [countc] ; 
   int Mindex= 0 ;
   for (int i=0 ; i<countc ; i++)
   {
       cout<< "Customer name?" << endl ; 
       string namec ;
       cin>> namec ; 
       Car [i].setname(namec) ;
       cout<< "Customer Age?" << endl ; 
       int agee  ;
       cin>> agee ;
       Car [i].setage(agee) ; 
       cout<< "Customer ID ?" << endl ; 
       int IDE  ;
       cin>> IDE ;
       Car [i].setID(IDE) ; 
       cout<<" what hour would you like" ; 
        int hour ; 
        cin>> hour ; 
        cout<< " what minute would you like";
        int minu ; 
        cin>> minu ; 
        Car [i].setTime(hour,minu) ; 
        int countee=0 ; 
        while(!Mcar[Mindex].isAvailable (hour,minu))
        {
          
           if(Mindex<2)
            { 
                Mindex ++ ; 
                
            }
            else 
            {
                Mindex=0 ; 
            }
            countee ++ ; 
            if (countee>3) 
            {
                cout<< " no appointemnts" ; 
                break ;  
            }
        }
        Car[i].setmechid(Mcar[Mindex].getID()) ; 
        Car[i].setmechname(Mcar[Mindex].getname()) ; 
   }
   
     for(int i=0; i<(countc-1); i++)
    {
        for(int j=0; j<(countc-i-1); j++)
        {
            if(Car[j]>Car[j+1])
            {
                 Customer temp = Car[j];
                Car[j] = Car[j+1];
                Car[j+1] = temp;
            }
        }
    }
   Queue<Customer> pq(countc); 
 
 
  for (int z= 0 ; z<countc ; z++)
  {
      pq.push ( Car[z]); 
  } 
  
    
    
    for(int i=0 ; i<countc ; i++)
    {
        try
        {
          pq.pop().print (); 
         
          
        }
        catch (No&e)
        {
            cout<< e.what () ; 
            
        }
        
         
         
        
    }

    
    return 0 ; 
}