#include <iostream> 
using namespace std  ; 

// Recursion 
//Recursion is the technique of making a function call itself.
//This technique provides a way to break complicated problems down into simple problems which are easier to solve.
//Recursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it.

// Task : Countdown 
void countdown (char n) {
    if (n>='a') { 
        cout << n << " " ; 
        countdown(n-1) ;
    }
    }

    int main() {
        countdown('k'); 
    return 0 ; 

}