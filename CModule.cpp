#include <iostream> 
using namespace std ; 
int main() {
// CModule signfies Notebook Code Drill
// pointers revision 

int x = 10 ;
int *ptr = &x ;
int **ptr2 = &ptr ;

cout << x << endl ;
cout << **ptr2 << endl ;



return 0 ;
}