#include <iostream>
using namespace std ;
//double pointer
// double pointer is used to store adress of the pointer itself

 int main(){
int x = 10 ;
int *ptr = &x ;
int **ptr2 = &ptr ;

cout << x << endl ;
cout << **ptr2 << endl ; 

return 0 ; 
 }