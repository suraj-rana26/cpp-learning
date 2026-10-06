#include <iostream> 
using namespace std ; 
int main() {
// nested loop 

for(int i = 1 ; i<3 ; i++){
    cout << " outer boundary " << i << endl ; 

    for( int j = 1 ; j<3 ; j++ ){
        cout << " inner boundary " << j << endl ; 

    }
}



return 0 ; 
}