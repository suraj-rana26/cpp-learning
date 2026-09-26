#include <iostream> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
// guess game blw 1 to 10 
using namespace std ; 
int main(){ 
    int guess = 0 ; 
    srand(time(0)) ; 
    int random = rand()%10+1 ;

    do{
        cout<<" guess the number "<< endl ; 
cin>> guess ; 
if(guess >  0) 
cout << " too high \n" ;
 else if( guess < 0 ) 
 cout << " too low \n " ; 
 else 
 cout << "congratulation bro \n" ; 
    }while( guess != random) ; 
    
    

    


    return 0 ;

}