#include <iostream>
#include <algorithm> 
#include <vector> 
using namespace std  ; 
int main(){
    vector<int> v ; 

// Algorithm :  is a predefined stl functio used to perform common operations on containers 
// synatax  ; 
// sort(v.begin() , v .end()) ; 
// 2 . reverse  algorithm
v.push_back(20) ;
v.push_back(83) ;
v.push_back(748) ;
v.push_back(847) ;
v.push_back(647) ;


reverse(v.begin() , v.end()) ;

for(int ele : v){
    cout<< ele << endl ;
}
    return 0  ; 
}