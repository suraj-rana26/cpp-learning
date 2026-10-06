#include <iostream>
using namespace std;

int main() {

    struct { 
      string brand ; 
      string model ; 
      int year ;

    } myCar1 , myCar2 ; 

    myCar1.brand = " BMW " ; 
    myCar1.model = " X5 " ; 
    myCar1.year = 1994 ; 

    myCar2.brand = " Range ROver " ; 
    myCar2.model =  "  Valour " ; 
    myCar2.year =  1983  ; 
    
    cout << myCar1.brand << "  " << myCar1.model <<  "  " << myCar1.year << endl ;
cout << myCar2.brand << "  " << myCar2.model <<  "  " << myCar2.year << endl ;



return 0 ; 
}