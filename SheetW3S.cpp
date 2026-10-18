#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std ; 

int main() {

vector<string> cars = { "volvo" , "bmw" , "ford" , "mazda"} ;


sort(cars.begin() ,cars.end()) ; 

for(string car : cars) {
  cout << car << endl ;
  
} 

  return 0 ; 
}