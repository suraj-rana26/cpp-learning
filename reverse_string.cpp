#include <iostream>
using namespace std ;
int main(){
 // coding question 1 ;
 // reverse the string 
 // method 1
 string str = "virat" ; 
 int s = 0 , e = str.size()-1 ; 
 while(s<e){
    swap(str[s++] , str[e--]) ; 
 }

 cout << str << endl ; 
return 0 ; 
}