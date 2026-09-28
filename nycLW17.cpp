#include <iostream> 
using namespace std ; 
int main(){
// palindrome questions ; 
string str = "hello"; 
int i = 0 , j = str.size()-1 ;
bool isPal = true ; 
while(i<j){
    if(str[i] != str[j]){
        isPal = false ; 
        break ; 
    }
    i++ ; 
    j-- ;
}
cout << isPal << endl ;


    return 0 ; 
}