#include <iostream> 
using namespace std ; 
// occur in hybrid inheritaance 
// happen when the parents classes inherit the same base class
// the child gets mutltiple copies of the common base class  

// here it can be ssolved using the scope resolution which is temporary method 
 //permanent solution is 'virtual inhertiance .'

 // synatx is using virtual keyword 

class A{ 
    public :
    int data1 ; 
    void m1() {
        cout << " M1 Method in class A " << endl ; 

    }
} ;
 class B : public virtual A{
    public:
    int data2 ; 
    voidm2() {
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
   D obj ; 
   obj.m1() ; 




    return 0 ;
}

