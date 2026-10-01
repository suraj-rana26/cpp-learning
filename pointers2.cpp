#include <iostream> 
using namespace std ;
// now writing the two or more fucntion you can write inside a pointer without including more
// write this in copy 
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
void getMaxMin(int*arr, int n , int*max ,int*min){
for(int i =1 ; i<n ; i++){
        if(arr[i] < *min){
           * min = arr[i] ; 
        } else if(arr[i] > *max){
            *max = arr[i] ;
        }
}
}

int main(){
    int arr[] = {31 ,12 , 73 ,49 ,15} ; 
    int n = sizeof(arr)/ sizeof(arr[0]) ; 

int max = arr[0] ;
int min = arr[0] ; 

    getMaxMin(arr , n  , &max ,&min) ; 
    cout << "Max = " << max << " , Min =" << min << endl ; 
    




    return 0 ; 
}