#include <iostream>
#include <algorithm> 
#include <vector> 
#include <map>
using namespace std  ; 
int main(){ 
    // Coding questions :
    // 1 . finding the frequency of element 
    // solve through map  
int arr[] ={1 ,2 , 3,1,2 ,3,6,3 ,7} ; 
int n = sizeof(arr)/sizeof(arr[0]) ;

map<int , int > m ; 

for(int ele : arr){
   m[ele]++ ;
}

for( auto p : m){
cout << p.first << " - " << p.second << endl ;
}

    return 0  ; 
}