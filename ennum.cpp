#include <iostream> 
using namespace std ; 
 // ennum 
 //ennum is collection of named integer constants 
// only integer constant
// ennum is old and ennum class is in modern cpp 
 
enum class Day {
    mon = 1 , tue , wed 
}; 
enum class Temp{
    mon = 5 , tue = 9 , wed = 20 
} ; 

int main() {
    int num = (int)Day::wed ;
    cout << num << endl ; 

    int num1 = (int)Temp::wed ; 
    cout << num1 << endl ;



    return 0 ; 

}