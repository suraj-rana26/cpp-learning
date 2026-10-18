#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<char> alpha = {'a' , 'b' ,'c' ,'d' , 'e','f'} ;
  for (char alp : alpha) {
    cout << alp << "\n";
  }  
  return 0;
}
