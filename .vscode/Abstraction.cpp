#include <iostream> 
using namespace std ; 
// Abstraction : 
// beyond sigma NYC
// abstract class 
// agar apke class fxn ke andar ek bhi pure virtual class hain 
// then your class become abstact class and kabhi bhi abstract ka object nhi bnta hai 

class Car{ 
    public : 
    virtual void start() = 0 ; // Pure virtual Function

    } ;

    class Tesla : public Car{
        public:
        void start() {
            cout << " Tesla car Starting ..." << endl ;

        }
    } ; 





int main() {
    Tesla obj ;
    obj.start() ;
    return 0 ; 
    
}