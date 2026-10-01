#include <iostream>
using namespace std ; 
 
// using the private access specifier to restrict the access of data members of the class from outside the class.
class Form{
private :
    string name ; 
int age ; 
string password ; 

public :
Form() {

}

Form(string name , int age){
    this->name = name ;
    this->age = age ;

}

string getName(){
    return name ; 

}
    int getAge(){
        return age ; 

    }
} ;    
        
  
    








int main() {

Form  obj1("john", 23);
Form obj2("polu " , 24) ;



cout << obj1.getName() << endl ; 
cout << obj1.getAge() << endl ;





    return 0 ;
}