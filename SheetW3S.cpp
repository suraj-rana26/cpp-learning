#include <iostream>
#include <string>
using namespace std  ; 

// create a class with some attributes
class Car {
    public:
    string brand ; 
    string model ; 
    int year ; 

} ; 

int main() {
     

    Car carObj1 ; 
    carObj1.brand  = " jeep" ; 
    carObj1.model = " class " ; 
    carObj1.year =  1923  ; 

Car carObj2 ; 
    carObj2.brand  = " BMW " ; 
    carObj2.model = " x5 " ; 
    carObj2.year =  1927 ; 


Car carObj3 ; 
    carObj3.brand  = "fortuner  " ; 
    carObj3.model =  "legendar" ; 
    carObj3.year =  2016 ; 

cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    cout << carObj3.brand << " " << carObj3.model << " " << carObj3.year << "\n";
    return 0 ; 

}