#include <iostream> 
using namespace std ; 
int main(){
int x = 300 , y = 10 ;
int *ptr = &x ;
int *ptr2 = &y ; 

cout << (*ptr > *ptr2) << endl ; 
cout << endl ; 




return 0 ; 
}