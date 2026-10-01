#include <iostream>
using namespace std ; 

class Form{
    public :
    string name ; 
int age ; 

Form(string name , int age){
    this->name = name ;
    this->age = age ;

}

Form(string name){
    this ->name = name ;
} 

    
        
        ~Form(){
            cout << "Destructor called " << endl ;
        }
  void display();
    } ;
  
    void Form :: display(){
    cout << "{Name : " << name << " ,Age :" << age << "}" << endl ; 
}









int main() {

Form  obj1("john", 23);
Form obj2("polu ") ;  // overloading 
obj1.display() ;




    return 0 ;
}