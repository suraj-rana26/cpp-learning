#include <iostream> 
using namespace std ; 
int main() {
bool isLoggedIN = true ; 
bool isAdmin = false ;
int securityLevel = 3 ; 

if(isLoggedIN && (isAdmin|| securityLevel <=2)){
    cout << " acess granted ." ; 
} else {
    cout << " Acess denied " ; 

}

    return 0 ; 
}