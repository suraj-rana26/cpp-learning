#include <iostream> 
using namespace std  ; 

int main() {
int n ;
cout << " enter the size of array :" ; 
cin>>n ; 
int arr[n] ; 
cout << " enter" << n << " elements of an array :" ;
for(int i = 0 ; i<n ; i++) {
    cin>> arr[i] ;

}
cout<< "\nElements are :" ;
for( int i= 0 ; i<n ; i++){
    cout<< arr[i] << " " ; 
}


    return 0 ; 


}