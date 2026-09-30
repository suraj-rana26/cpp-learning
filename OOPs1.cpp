#include <iostream> 
using  namespace std ; 
// oops also solve the problem with  repetion of code 
//

class Form{
    public :
    string name ; // data members || propetries || attributes 
    int age ; 

Form(){ // constructter j
    cout << "Hello \n" ; 

}

void intialise(string n, int a){
    name = n ; 
    age = a; 

}
void display(){
    cout << "{Name :" << name << ",Age :" << age << "}" << endl ; 

}
} ; 
int main() { 
    Form obj1 ; 
obj1.intialise("Golu" , 21) ; 
obj1.display() ; 

Form obj2 ; 
obj2.intialise( " molu" , 23) ; 
obj2.display() ;

Form obj3 ; 
obj3.intialise ("rollu " , 43) ; 




    






    return 0 ; 


}
