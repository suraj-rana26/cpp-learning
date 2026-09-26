#include <iostream> 
using namespace std ; 
int main() {
int arr[] = { 10 , 20 ,30 ,53 ,637} ; 
int size = 0 , max = arr[0] ; 
size = sizeof(arr) / sizeof(arr[0]) ;
for(int i = 0  ; i<size ; i++) {
    // compare 
    if(arr[i]> max)
    max = arr[i] ;

}
cout << max << endl ; 
 
// here the line 6 is very important to write in 
// array because from there we will the system will the number of element there is and check one by one 



    return 0 ; 
}