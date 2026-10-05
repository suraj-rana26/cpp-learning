#include <iostream> 
using namespace std ; 
int main() {
// person eligible to vote or not 
// using nested if statements) 
int age = 38 ; 
bool isCitizen =  true ; 

if(age>=18){
    cout << " you are eligble to vote " ; 

 if ( isCitizen){
    cout << " you are the citizen to vote " << endl ;
 } else{
    cout << " you are not the citizen not applicable " << endl ; 
 }
} else {
    cout << " not eligble to vote " ; 
 }



return 0 ; 
}