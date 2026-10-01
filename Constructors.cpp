#include <iostream> 
using namespace std ; 
    // constructors 
    // special function that automatically called when objected is created 
    class Form{
        public : 
        string name ;
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

        return 0 ;
    }

   
   
   
   

