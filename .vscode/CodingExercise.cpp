#include <iostream>
#include <iostream>
using namespace std;

int main() {

//  Hotel mangement 

int numGuests ; 
cout << " how many guests ? " ;
cin >> numGuests ;

// check for valid input 

if(numGuests <= 0) {
    cout << " number of guest atleat one " << endl ;
    return 0 ; 
}

// create memory space for x guest 
string* guests = new string[numGuests] ; 


cin.ignore() ; 

// eneter the guest names 
for(int i = 0 ; i<numGuests ; i++) {
    cout << " enter your name for guest " << (i+1) << " : " ; 
    getline(cin , guests[i]) ; 
    
}
// show all guests 

cout << " guest checked in : " << endl ;
 for (int i = 0 ; i <numGuests ; i++) {
cout << guests[i] << endl ; 



}


delete[] guests ; 

    return 0 ; 

}