// Given an array, rotate the array by one position in clock-wise direction.
// Input:
// N = 5
// A[] = {1, 2, 3, 4, 5}
// Output:
// 5 1 2 3 4

// Input:
// N = 8
// A[] = {9, 8, 7, 6, 4, 2, 1, 3}
// Output:
// 3 9 8 7 6 4 2 1
#include <iostream>
using namespace std;
int reverse(int *arr){
    int x,i;
    for( i=9;i>=0;i--){
        arr[i+1]=arr[i];
    }
    x=arr[10];
    arr[0]=x;
    for(i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main(){  
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    reverse(&arr[0]);
}