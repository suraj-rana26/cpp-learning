#include <iostream> 
#include <map>
using namespace std ; 
// _____ Map_____

int main() {
map<string , int> people = {{"john" , 54} , {"ben" , 32} ,{"tony" ,24}}; 

cout << " john is : " << people["john"] << endl ; 

cout << " ben is :" << people["ben"] << endl; 

return 0 ; 


}

