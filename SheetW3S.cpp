#include <iostream> 
using namespace std ; 
// Pass an array as Parameters 
// you can also pass array to a function  
void myFunction(int myNum[5]) {
    for (int i = 0 ; i<5 ;  i++) {
        cout << myNum[i] << "\n " ; 
    }

    }

    int main() { 
        int myNum[5] = {10 ,20 ,30,40 ,50} ; 
    myFunction(myNum) ; 


return 0 ;  
}