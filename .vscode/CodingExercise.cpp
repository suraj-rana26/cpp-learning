#include <iostream> 
using namespace std ; 
int main() {
    int time = 22 ; 
    string message = (time<12)? "good baby " : (time<18) ? "bad baby " : (time>21) ? " Awesome Baby " : " DEFAULT baby" ;
    cout  << message << endl ;

    return 0 ; 
}