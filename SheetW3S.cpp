#include <iostream>
#include <string>
using namespace std  ; 

class meraClass {
    public :
    int myNum ; 
    string meraString ;

} ;

int main() {
    meraClass myobj ;

    myobj.myNum = 12 ; 
    myobj.meraString = "Here we are " ; 

    cout << myobj.myNum << "\n" ; 
    cout << myobj.meraString ;







    return 0 ; 

}