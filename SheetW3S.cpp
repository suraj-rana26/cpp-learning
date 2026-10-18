#include <iostream>
using namespace std ;

// Polymorphism ;

//Virtual Function 
// A virtual fxn is a member function in the base class that can be overridden in derived classes ; 
//Without virtual: the base function runs, even if the object is from a child class.
//With virtual: the child's version runs, like you expect.


class Animal {
  public:
    virtual void sound() {
      cout << "Animal sound\n";
    }
};

class Dog : public Animal {
  public:
    void sound() override {
      cout << "Dog barks\n";
    }
};

int main() {
  Animal* a;
  Dog d;
  a = &d;
  a->sound(); 


return 0 ; 
}