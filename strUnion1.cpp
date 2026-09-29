#include <iostream> 
using namespace std ; 


struct Student {
    string name ; 
    int age ; 
} ;

// highly optimised way to print student details 
// data will raise according to the user requirment 
// user can decide for how may student they want to print the data
int main() {
int size ; 
cout << " enter number of student :" ; 
cin >> size ; 
cin .ignore() ; 


Student arr[size] ;
for (int i = 0 ; i<size ; i++){
cout << " enter name of " << (i+1) << "student :" << endl ; 
getline(cin ,arr[i].name) ; 

cout << " enter age of " << (i+1) << " student :" << endl ; 

cin >> arr[i] .age ; 

cin .ignore() ; 
}

//print 

cout << " \n -----------Student Details -------\n" ;

for (int i = 0 ; i<size ; i++){
    cout << "{Name:}" << arr[i].name << ",Age :" << arr[i].age << endl ; 

}


    return 0 ; 

}