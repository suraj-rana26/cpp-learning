#include <iostream> 
using namespace std; 

class Animal{
    public:
    void sound(){
        cout << " sounding....." << endl ;

}
};
class Dog : public Animal{
   public:
   void sound() {
    cout << "Dog Sound - Bhow - Bhow !!" << endl; 

   } 
}; 

class Cat : public Animal{
    public:
    void sound(){
        cout << " Cat SOund - Meow - Meow !!"<< endl ; 

    }
} ;

int main() {

Dog obj ; 
obj.sound() ;




    return  0  ; 

}

