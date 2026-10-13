#include <iostream> 
using namespace std ; 
// pass by referance 
 void swapNums(int &x ,int &y) {
    int z = x ;
     x = y ; 
     y = z ; 
 }
 int main() {
    int firstNum = 10 ;
    int secondNum = 20 ; 

    cout << " before Swap " << "\n" ;
      cout << firstNum << secondNum << "\n" ; 

    swapNums(firstNum ,secondNum) ; 
    
    cout << " After swap " <<  "\n";
     cout << firstNum << secondNum << "\n" ;


return 0 ;  
}