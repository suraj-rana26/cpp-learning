#include <iostream> 
using namespace std ; 
//Pass By refernce 
// passing a structure by refernce using &
// this allows the function to modify the orginal data 
// note ; use refernce if you want the function to chnage the structure dta to avoid copying the large structure 

struct Car { 
    string brand ; 
    int year  ; 

} ; 
void myfxn  ( Car &c) {
    c.year++ ; 
}

int main () {
    Car myCar = { "Toyota" , 2020} ; 
    myfxn(myCar) ; 
    cout << " the " << myCar.brand << " is now from year" << myCar.year << "\n" ; 



return 0 ;  
}