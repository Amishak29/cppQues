// write a function to return first positive element of the input array of length n. pass by referance
#include <iostream>
using namespace std;
int pos(int *x,int n){
    for(int i=0;i<n;i++){
        if(x[i]>0){
            cout<<x[i]<<endl;
            break;
        }
        // cout<<*(x+i)<<endl;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pos(&arr[0],n);
}