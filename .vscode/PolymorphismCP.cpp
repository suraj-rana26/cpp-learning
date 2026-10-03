#include <iostream>
#include <vector>
using namespace std;

// -------------------- Compile-time Polymorphism --------------------

// Function Overloading
class MathOperations {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

// Operator Overloading
class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Overload + operator
    Complex operator + (const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// -------------------- Runtime Polymorphism --------------------

// Base Class
class Animal {
public:
    virtual void speak() {   // virtual function
        cout << "Animal makes a sound" << endl;
    }
};

// Derived Classes
class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows" << endl;
    }
};

class Cow : public Animal {
public:
    void speak() override {
        cout << "Cow moos" << endl;
    }
};

// -------------------- Main Function --------------------
int main() {
    // Compile-time polymorphism
    MathOperations math;
    cout << "Sum of 2 ints: " << math.add(10, 20) << endl;
    cout << "Sum of 2 doubles: " << math.add(3.5, 4.5) << endl;
    cout << "Sum of 3 ints: " << math.add(1, 2, 3) << endl;

    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;   // operator overloading
    cout << "Complex addition result: ";
    c3.display();

    // Runtime polymorphism
    vector<Animal*> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Cow());

    cout << "\nAnimal sounds (runtime polymorphism):" << endl;
    for (auto animal : animals) {
        animal->speak();   // resolved at runtime
    }

    // Free memory
    for (auto animal : animals) {
        delete animal;
    }

    return 0;
}
