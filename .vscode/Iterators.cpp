#include <iostream> 
#include <vector>
using namespace std ; 
int main() {

// Iterators : is an object used to traverse element of a container
// syntax 
// vector<int>::iterator it ;
vector<int> v ;
v.push_back(10) ;
v.push_back(20) ;
v.push_back(30) ;
v.push_back(40) ;
v.push_back(50) ;


vector<int>::iterator it ; 

for( it = v.begin() ; it != v.end() ; it++) {
    cout << *it << endl ; 
}


cout << *(v.end()) << endl ;

    return 0 ;




}