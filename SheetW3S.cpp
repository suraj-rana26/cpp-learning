#include <iostream> 
using namespace std ; 

void myFunction() { 
    cout << " i have done it " << endl ; 
}

int main() {
    myFunction() ;
// to declare mutliple times you can print it same keyword 
   myFunction() ; 
   myFunction() ; 

    return 0 ; 

}