#include <iostream> 
using namespace std ; 
int main(){
// toggle it 
string str = "notYouRcoLleGe";
 int v = 0 , c = 0 ; 
 for(int i = 0 ; i<str.size() ; i++){
  if(str[i]>= 'a' && str[i] <= 'z')
  str[i] = str[i]-32 ;
  else 
  str[i] = str[i]+32 ;
 }
 cout << str << endl ;
// we here toggling 
// basic concpet is use of asci value 




    

return 0 ; 
}