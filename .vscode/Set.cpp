#include <iostream>
#include <set> 
using namespace std ; 
int main() {
// Set : container that stores unique elements in sorted oreder
// synatx & there is lot of function in set through which we acn 
// insert erase , find count etc in the set 
// set<int> s ;
set<int> set ; 
 
set.insert(10) ; 
set.insert(20) ;
set.insert (30) ; 
set . insert (90) ; 
set .erase (90) ; 
 
for(int ele : set){
    cout<< ele << endl ; 
}

// here we are finding the obj 20 since find function shows as iterator thatswhy we are print the 20 
// similar  for count fxn if element exist return 1 otherwise 0 .
cout << *(set.find(20)) << endl ;
   
return  0 ;

}