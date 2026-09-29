#include <iostream> 
using namespace std ; 

// structure & union 
 //  1 . creating the structure 

 struct Student {
    string name ; 
    int age ; 
 };


 int main() {
Student s1 ; 
s1.name = "Golu" ; 
s1.age =  21  ;

cout << "{Name : " << s1.name << " ,Age :" << s1.age << "}" << endl ;




    return 0 ; 



}