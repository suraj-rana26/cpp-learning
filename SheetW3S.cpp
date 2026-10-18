#include <iostream>
using namespace std ;

// base class 
class Employee { 
  protected :
  int salary ;

} ;

class Programmer : public Employee { 
  public : 
  int bonus ; 
  void setSalary ( int s) { 
    salary = s ; 

  }
int getSalary() { 
  return salary ; 
}

} ; 

int main() { 
  Programmer myObj ; 
  myObj.setSalary(50000) ; 
  myObj.bonus = 15000 ;


  cout << " salary " << myObj.getSalary() << "\n" ; 

cout << " bonus " << myObj.bonus << "\n" ; 
  











return 0 ; 
}