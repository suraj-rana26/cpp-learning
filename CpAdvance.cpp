#include <iostream> 
using namespace std ; 
int main(){
// dynamic memory allocation 
// not understand the code
int *ptr = new int(10) ; 
int *arr = new int[10] ; 

delete ptr ; 
delete [] arr ; 

arr = nullptr ;
ptr = nullptr ; 

if(ptr != nullptr){
    cout << *ptr << endl ; 
}



 


    return 0 ;
}