#include <iostream> 
using namespace std ; 
    // union code 
// union - is a user defined data type in which all members share the same memory location 
// syntax same as structure
union Temp{
    char ch ; 
    int myNUM ; 

} ; 

int main() {
    Temp s ; 
s.ch = 'a' ; 
s.myNUM = 98 ; 


cout << " integer Value " << s.myNUM << endl ; 
cout << " character value " << s.ch << endl  ; 

// output is 
 //integer Value 98
// character value b
 from the output we cans see that there is 
 // change in the value of charcater form a to b ,,
 // thas the work of union to share the memory loction that 
// since 'a' has the asci valur of 97 
// when asci value updtated to 98 , then chractr have to also update 

    return 0  ; 

 } 