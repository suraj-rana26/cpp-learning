#include <iostream>
using namespace std ;
int main(){
// note it down
string str ;
cout << " enter a string " ;
getline(cin ,str) ;
// traverse
for( int i = 0 ; i< str.length() ;i++){
    cout << str[i] << endl ;

}
// in place of lenght you can also able use size for same output
    return 0 ;

}