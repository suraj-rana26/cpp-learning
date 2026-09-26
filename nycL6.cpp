#include <iostream>
#include <cmath> 
using namespace std;
// armstrong number clarifiacation 
int main() {
int n = 153 ; 
int c = 0 , copy  = n , sum = 0 ; 
//count the digit 
while( n > 0 ) { 
    c++ ; 
    n /=10 ; 

}
 n = copy ; 
 while(n>0){
    int lastd = n % 10  ; 
    sum+= pow( lastd ,c) ; 
    n/=10 ;
 }
    n = copy ; 
    cout << (( sum == n)? " armstrong \n" : " not a armstrong\n") ;
 


return 0; 
}

