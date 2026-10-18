#include <iostream> 
#include <set>
using namespace std ; 
// _____ Sets_____

int main() {


set<int , greater<int>> numbers = { 1, 5 ,3 ,6,9,4,2} ;

for(int num : numbers){
  cout<<num << endl ;

}

}