#include <iostream>
using namespace std;
class Person 
{
    
private: 
string name; 
int ID ;
int age; 
 
public: 

Person() ;
void setname (string n);
string getname ();
void setID (int id );
int getID ();
void setage (int a);
int getage ();
void print (); // prints out the variables in the class with their new values that are inputed by the user 
};

