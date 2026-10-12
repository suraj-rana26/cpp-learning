#include <iostream> 
using namespace std ; 
// OOPS Concpet 
class Form{
    public :
    string name ; // data members || propetries || attributes
    int age ;

Form(string name , int age){
        this->name = name ;
        this->age = age ;
    }
    void display(){
        cout << "{Name: " << name << " , Age " << age << "}" << endl ;
    }
   
    };

    int main(){
        Form obj1("Glou" , 34) ;
        obj1.display();

      Form obj2( "cholu" , 23) ;
      obj2.display() ; 



    return 0  ;

 }