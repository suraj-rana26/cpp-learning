#include <iostream> 
using namespace std ; 
int main() {
// this is the example of getline through which we are able to can write a name with use of space 
// method 1 noob method 
string name  ; 
string name1 ; 
int age ; 
cout << " enter you age " ; 
cin >> age ; 
cout << " enter your name " ; 
cin.ignore() ; 
getline(cin ,name) ; 
cout<< " hello" << name << " you are " << age << "years old " << endl ; 
return 0 ; 
}21