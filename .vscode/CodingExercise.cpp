#include <iostream> 
using namespace std ; 
int main() {
    // Nested If 
    int myAge = 20 ; 
string citizen = "Indian" ; 
    if(myAge>=18){
        cout << " old enough to vote " << endl ;

        if(citizen == "Indian"){
            cout << "  you  can give vote " << endl ; 
        }else {
            cout << " you cannot vote" << endl ;

        } 
    } else {
        cout << " not enough to vote " << endl ;
    }
    return 0 ; 
}