#include <iostream> 
#include <algorithm> 
#include  <string>
using namespace std ; 

int main() { 
    string word = "disc" ; 

    sort(word.begin() ,word.end()) ;
    int count = 0 ; 

do{
    cout<< word << endl ; 
    count++ ;
}while ( next_permutation(word.begin(),word.end())) ;

cout << " total permuation of the word is "<< count << endl ;

return 0 ; 
}




