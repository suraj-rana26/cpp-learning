#include <iostream> 
using namespace std ; 
int main() {
int arr[] = { 5 ,4 ,3 ,2 ,1 } ; 
int n = sizeof(arr) / sizeof(arr[0]) ; 
// bubble sort

for(int i = 0 ; i<n-1 ; i++ ){
    for( int j =0 ; j<n-1 ; j++){
        if(arr[j] > arr[j+1]){ 
            // its time to swap if have problem 
            int temp = arr[j] ; 
            arr[j] = arr[j+1] ;
            arr[j+1] = temp ;  

        }
    }
}

for(int i = 0 ; i<n ; i++){
    cout<< arr[i] << "  " ; 

}

cout << "\n" ; 
    return 0  ;

// for optimised solution we have many step , where we go till end to arrange them , thats little long , and their we have our value , which is little already arranged , so  hwts 
// what we can do do to arrange our 
//correct sequence is that we can run the cose as 
// n , n- 1 , n - 2 , n-3  steps '
// which gives j < n -1 - i 

}