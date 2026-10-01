#include <iostream> 
using namespace std ; 
 class Form{
    private :
    string name ; 
    int age  ; 
    int password ; 
    
    public :
    Form() {

    }

    Form(string name , int age ) {
        this-> name = name ; 
        this-> age = age ; 
    }

// getter function to access the private data members of the class from outside the class.
    string getName() {
        return name ; 
    }

    int getAge() {
        return age ; 
    }

// setter function to modify the private data members of the class from outside the class.
    void setAge( int age ) {
        this-> age = age ; 

    }


 } ;


int main() {
Form obj("Golu" ,23) ; 
Form obj1( "polu" , 45) ; 
 
cout << obj.getAge() << endl ; 

obj1.setAge(45) ;
cout << obj1.getName() << endl ; 

cout << obj1.getAge() << endl ; 





 // encapsulation is the process of binding the data members and member functions together in a single unit called class.  
// data hiding is the part of encapsulation where we can restrict the access of data members of the class from outside the class using private access specifier.

return 0 ; 

}