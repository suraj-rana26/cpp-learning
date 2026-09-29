#include <iostream> 
using namespace std ; 

// structure & union 
 //  1 . creating the structure 

 struct Student {
    string name ; 
    int age ; 
 };


 int main() {
Student s1 = {"Golu" ,21} ; 
Student s2 = {"Polu",24} ; 

cout << "{Name : " << s1.name << " ,Age :" << s1.age << "}" << endl ;
cout << "{Name : " << s2.name << " ,Age :" << s2.age << "}" << endl ;



    return 0 ; 



}