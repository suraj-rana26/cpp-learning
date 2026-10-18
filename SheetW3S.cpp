#include <iostream>
#include <ctime>
using namespace std ; 

int main(){ 
// timestamp for cuurent date and time 
  time_t timestamp ; 
  time(&timestamp) ;

  cout << ctime(&timestamp) ;
  return 0 ; 
}
