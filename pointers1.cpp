#include <iostream> 
using namespace std ; 
    // swapping the value with the help of pointers 

void swap(int *x , int *y ){
int temp =*x;
*x = *y;
*y = temp ;

}
int main(){
    int x = 20 , y = 30 ; 
    cout << " before calling :\nx = "<< x << ",y = " << y << endl; 
    swap(&x,&y);
    cout << " after calling :\nx = " << x << " , y = "<< y << endl ;
    
    
// error find not understand search by gpt  pending to notre
 



return 0 ; 
}