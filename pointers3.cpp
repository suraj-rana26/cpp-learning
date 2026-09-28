#include <iostream> 
using namespace std ;

int getMax(int* arr , int n){
    int max = arr[0] ;
    for(int i = 1 ; i<n ; i++){
        if(arr[i] > max){
            max = arr[i] ; 

        }
    }

    return max ; 
}

int getMin(int* arr, int n){
    int min = arr[0] ; 
    for(int i =1 ; i<n ; i++){
        if(arr[i] < min){
            min = arr[i] ; 

        }
    }
    return min ; 
}


int main(){
    int arr[] = {31 ,12 , 73 ,49 ,15} ; 
    int n = sizeof(arr)/ sizeof(arr[0]) ; 

    int max = getMax(arr ,n) ; 
    int min = getMin(arr ,n ) ;
    
    cout << "Max = " << max << " , Min =" << min << endl ; 
    





    return 0 ; 
}