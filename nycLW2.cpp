#include <iostream> 
using namespace std ; 
int main(){ 

// reverse the number step 2 
int arr[] = { 12 , 36 , 46 , 57 , 98 ,101 } ; 
int target = 98 ; 
int n = sizeof(arr) / sizeof(arr[0]) ;

int ans = -1 ; 
int s = 0 , e = n-1 ; 
// here the end is n - 1 because indexes 
while( s <= e ){
    int mid = ( s + e ) / 2 ;
    if(arr[mid] == target){
        ans =  mid ; 
        break ; 
    }else if (arr[mid] < target) 
    s = mid + 1 ; 
    else 
    e = mid - 1 ; 
}

        

    

cout << ans << endl ;

return 0 ; 
}