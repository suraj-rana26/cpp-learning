#include <iostream> 
using namespace std ; 
int main() {
// exception handling ; 
//   keyword is most important here 
// 1 . try , 2 . throw , 3 . catch 

try{
    int a = 100 , b = 0 ;
    if(b==0){
        throw " Divide by zero" ; 
        // here throw is inavlid synatx to be performed
    }
    cout << (a/b) << endl ; 
}catch(...){
    cout << " UNKWNOWN EXCEPTION HAIN"  << endl ; 

}
 cout << "Tumne kar diya kaam " << endl ; 
 cout << " program continues baby..." << endl ;




    return 0 ; 
}