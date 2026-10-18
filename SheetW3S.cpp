#include <iostream>
#include <ctime>
using namespace std ; 
// _________ERRORS__________
int main() { 
try { 
  int age = 13 ; 
  if(age >=18) { 
    cout << " Access granted - you are eligble" ;
  } else { 
    throw "niKAl" ;

  }
}
catch (const char* myString) { 
  cout << " Acess denied - You must be at least 18 year old " << endl ;
  cout << " error Text " << myString ;

}

return 0 ; 
} 