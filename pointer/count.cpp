// Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K
#include <iostream>
using namespace std;
int target(int *arr, int *counter, int k,int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                *counter=*counter+1;
                cout<<arr[i]<<"  "<<arr[j]<<endl;
                cout<<*counter<<endl;
            }
        }
    }
 //   cout<<"The number of pairs is:"<<*counter;
    return 0;
}
int main(){
    int i,n,k,counter=0;
    cin>>n;
    cout<<"sum:"<<endl;
    cin>>k;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    target(&arr[0],&counter,k,n);
}