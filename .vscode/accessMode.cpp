#include <iostream> 
using namespace std ; 
// ACCESS MODE Summary ; 
class A{
public : 
    int data1;
} ;

class B : public A{ // You can access here p

    public :
    int data2 ; 

    void display() {
        cout << " Data1 :" << data1 << endl ;
        cout << " Data2 : " << data2 << endl ; 

    }
} ; 



int main() { 

    B obj ;
obj.display() ; 

    return 0 ; 

}