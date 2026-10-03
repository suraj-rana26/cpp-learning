#include <iostream> 
using namespace std ; 
// Abstraction : 
// beyond sigma NYC
// Abstraction : has two types 1 . concerte class and 2 . Abstract Class 
 //1 . Concreate class  ; Partiallly happen 
 // for 
class Car{ 
    private : 
    void engine(){
        cout << " engine starting..." << endl ; 

    }
    public : 
    void start(){
        engine() ; 
        cout << " starting..." << endl ;

    }
} ; 




int main() {
    Car obj ;
    obj.start() ;
    return 0 ; 
    
}