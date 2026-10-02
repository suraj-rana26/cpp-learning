#include <iostream> 
using namespace std ; 
//  For constructor first run parents class and child class 
// For Destructor first run child then comes parents 
class A{ 
    public :
    int data1 ; 
 
    A(){
        cout << " A class Constructor " << endl ;

    }
~A(){
    cout << " A class Desstructor " << endl ;

}



    void m1() {
        cout << " M1 Method in class A " << endl ; 

    }
} ;

 class B : public virtual A{
    public:
    int data2 ; 

    B(){
        cout << " B class Constructor " << endl ; 

    }
    ~B(){
    cout << " B class Desstructor " << endl ;

    }
    void m2() {
        cout << " M2 Method " << endl ; 

    }
 } ; 

class C : public virtual A{
    public :
    int data3;
    void m3() {
        cout << "M3 Method " << endl ;

    }

} ;

class D : public B , public C{

} ;

int main() {
   B obj ;



    return 0 ;
}

