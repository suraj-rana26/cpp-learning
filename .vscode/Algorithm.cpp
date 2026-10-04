#include <iostream>
#include <algorithm> 
#include <vector> 
#include <set>
using namespace std  ; 
int main(){ 
    // Coding questions :
    // 1 . remove duplicate  
int arr[] ={1 ,2 , 3,1,2 ,8,6,3 ,7} ; 
int n = sizeof(arr)/sizeof(arr[0]) ;
// to remove the duplicate we will make set from the element that put only unique element on it ; 

set<int> s ; 

for(int ele : arr){
    s.insert(ele) ;

}

for(int ele : s){
    cout << ele << endl ;

}

    return 0  ; 
}