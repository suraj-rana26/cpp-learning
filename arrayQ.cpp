#include <iostream>
using namespace std ; 
int main() {
int arr[] = { 100 , 35 , 42 , 4 ,56 ,67 ,45} ; 
int n = sizeof(arr) / sizeof(arr[0]) ; 

//  reverse the number 
for( int i=n-1 ; i>=0; i-- ) { 
cout << arr[i] << " " ; 
}
cout << "\n "  ;  

    return 0 ; 

}
