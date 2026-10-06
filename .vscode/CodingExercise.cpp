#include <iostream>
using namespace std;

int main() {
  // SHIP BATTLE GAME 
  // Destroy all the ships 
  bool ships  [4][4] = {
    { 0 , 1, 1 , 0 },
    {0 , 0 , 0 , 0 } , 
    { 0 , 0 , 1 , 0 } , 
    { 0 , 0 , 1 , 0 } 

  } ; 
// hit you have done and number of time you have do 
 int hits = 0 ; 
 int numberOfTimes = 0 ; 
// program ya hit tab tak kro jab tak total ship dub na jaye 

 while ( hits<4) {
    int row , column ; 

cout << " Selcting the coordinate " << endl ; 
cout << " choose a row nummber btw 0 & 3 :" << endl ; 
cin >> row ;

cout << " choose a  coloumn number btw 0 to 3 " << endl ; 
cin >> column ;


if( ships[row][column]) {
    ships[row][column] = 0  ;  
    hits ++ ; 


    cout << " hit " << ( 4-hits) << "left " << endl ;
} else {
    cout << " miss " << endl ; 

}

numberOfTimes++ ; 


 }
 cout << " victory " << endl ; 
 cout <<  " you won in "  << numberOfTimes << " turns " << endl ; 


  return 0;
}
