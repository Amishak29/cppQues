#include <iostream>
using namespace std;
int main(){
    int n,k,i,j;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        arr[i]=i;
    }
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    for(i=0;i<n;i++){
        for(j<i+1;j<n;j++){
            if(i+j==n && i%2!=0 && j%2!=0 && i!=j){
                cout<<i<<j<<endl;
            }
        }
    }
}