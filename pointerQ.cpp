#include <iostream> 
using namespace std ;

void reverse( int arr[] , int n){
    int s = 0 ; 
    int e = n - 1 ; 

    while(s<e){
        int temp = arr[s] ; 
        arr[s] = arr[e]; 
        arr[e] = temp ; 

        s++ ; 
        e-- ; 
    }
}



int main() {
// problem 1 
// problem : Reverse Array using Pointers 

int arr[] ={1 ,2 ,3,4 ,5} ; 
int n = sizeof(arr)/sizeof(arr[0]) ; 

reverse (arr , n ) ;

//Print 
for(int i = 0 ; i<n ; i++){
   cout << arr[i] << " " ; 

}

    return 0  ; 

}