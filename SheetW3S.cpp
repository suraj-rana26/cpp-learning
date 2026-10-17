#include <iostream> 
using namespace std ; 

int plusFunc(int x, int y) {
  return x + y;
}
// here we have function overloading , in int and double fucntion name , we have kept same name as you can 
// se that plusFunc  in both of the data types used for differnet operation
double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
return 0 ;  
}