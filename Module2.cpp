#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// to print the prime number of give numbers 

bool checkPrime(int n ){
    if(n==0 || n==1) return false ;

    for( int i = 2 ; i*i <= n ; i++){
        if(n%i==0){
            return false ; 
        }
    }
    return true ;
}


int main() {

    int n ; 
    cin >> n ; 

    for( int i = 1 ;i<=n ; i++) { 
        if(checkPrime(i)){
            cout << i << " " ;

        }
    }
    return 0 ;
}
