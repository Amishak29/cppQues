#include <iostream>
using namespace std;
 int main(){
    int n,i,f1=0;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements in the array"<<endl;
    int arr[2*n],a[n],b[n],brr[2*n];
    for(i=0;i<2*n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        a[i]=arr[i];
    }
    for(i=n;i<2*n;i++){
        b[i-n]=arr[i];
    }
    for(i=0;i<n;i++){
        brr[f1]=a[i];
        f1=f1+2;
    }
    int f2=1;
    for(i=0;i<n;i++){
        brr[f2]=b[i];
        f2=f2+2;
    }
    for(i=0;i<2*n;i++){
        cout<<brr[i]<<" ";
    }
 }