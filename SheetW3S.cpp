#include <iostream>
 #include <list>
using namespace std ; 
// ____List_______
//You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.

//Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers

int main() {
  list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Change the value of the first element
  cars.front() = "Opel";

  // Change the value of the last element
  cars.back() = "Toyota";

  cout << cars.front() << "\n";
  cout << cars.back() << "\n";
  return 0;
}

