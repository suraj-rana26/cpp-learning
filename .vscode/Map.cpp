#include <iostream>
#include <map>  
using namespace std ; 
int main () {
//Map stores data in the form of key - Value pair where keys are unique and sorted . 
// #include < map > 
// synatx ; 
// map<int, string> mp ; 
map<int,string> map ;

map.insert({1, "rahul"} ); 
map.insert({5, "golu"} ); 
map.insert({4, "anu"} ); 
map.insert({2, "ahul"} ); 
map.insert({3, "hul"} ); 
map.erase(4) ;

// here we can update the value also ; 
map[2] = " kapil " ; 




 // here is first denotes the number and second denotes the name 
 // and repetion happen from for loop


for(auto yo : map) {
    cout <<yo.first << " - " <<  yo.second << endl ; 
}

    return 0  ; 

}