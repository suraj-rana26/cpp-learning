#include <iostream> 
using namespace std ; 
// Double game 
int doubleGame(int x ) {
    return x * 2 ; 
}

int main() {
    for(int i = 0  ; i <=5 ; i++) {
        cout << " Double of  " << i << " is" << doubleGame(i) << endl ; 

    }
 

return 0 ; 
}