#include <iostream>
using namespace std ; 
// static member , for exmaple if you are making collgeg student data  of you rown college , so your college of all student 
// will remain same ; 
// static keyword relation with the class 
// why static 
// avoid duplicate data for evry  object 
// share common data among all the object 
// belongs to the xlass , not an individual object  



class Form {
    public :
    string name ; 
    int age ; 
    static string collegeName ; 
    Form(string name , int age){
        this->name = name ; 
        this->age = age ; 

    }
      static void m1(){ // we  can also include function in static
        cout << "M1 method"  << endl ;
      }


    void display() {
        cout << "{Name :" << name << " ,Age" << age <<"}" << endl ; 

    }
};

string Form :: collegeName = "ggv" ; 


int main() {

Form obj1("Golu" , 32) ; 
obj1.collegeName = " cu" ; 
cout << obj1.collegeName << endl ; 

Form obj2("rolu" ,23) ; 
cout << Form::collegeName << endl ;

Form::m1();


    return 0 ; 


} 