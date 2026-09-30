#include <iostream> 
using namespace std ; 
// destructor concept 

class Form{
    public :
    string name ; 
    int *age ; 

    Form(string name , int age){
        cout << " constructor called !!" << endl ; 

        this->name = name ; 
        this->age = new int(age) ; 

    }
    ~Form() {
        cout << " destructor Called !!" << endl;

    }

    void display(){
        cout<< "{Name:" << name << ",Age:" << *age<<"}" << endl ;
    }
};




int main() {
    Form obj1("Golu" ,22) ; 
    obj1.display() ;

    return 0 ; 
}