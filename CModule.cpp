#include <iostream> 
using namespace std ; 
int main() {
// CModule signfies Notebook Code Drill
string str = "notYourcOllege";
 int v = 0 , c = 0 ;
 for(int i = 0 ; i<str.size() ; i++){
   if(str[i]=='a'|| str[i] =='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
   v++ ;
   else
   c++ ;


    }

cout<< "vowels="<< v<<",and constant=" << c<< endl ;







    return 0 ; 


}