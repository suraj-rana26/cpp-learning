#include <iostream> 
using namespace std ; 

class Findmax{
    public:
    int myMax( int a , int b){
        return a>b ? a:b ;

    }
    double myMax(double a , double b) {
        return a>b ? a:b ; 

    }
    double myMax(int a , double b) {
        return a>b ? a:b ; 
    }
} ;





int main () {

// Polymorphism :
Findmax obj ; 
cout << " Maximum : " << obj.myMax( 29 , 35) << endl ; // can be find through normal method 
cout << " Maximum : " << obj.myMax( 29.34 , 35.23) << endl ; // need to create fxn
cout << " Maximum : " << obj.myMax( 29 , 35.67) << endl ; // need to create fxn





    return 0 ; 

}