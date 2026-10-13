#include <iostream> 
using namespace std ; 
// parameter and arguments :
// information is passed to fuction in the form of parameter , you can add as much as parameter inside the ()
// syntax 
 // void functionName(par1 , par2 , par3) {
 // code to be executed 

void myFunction(string Fname , int Roll ) { 
cout << Fname << " - " << Roll << endl ; 



}


int main() {
    myFunction(" Liam" , 25) ;
    myFunction("jenny" , 34) ; 
    myFunction("Anjay" ,36) ; 
// to declare mutliple times you can print it same keyword 

    return 0 ; 

}