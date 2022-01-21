//To copy the element in other array and reverse them 

#include <iostream>
using namespace std;

int main(){
    int n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        b[n-i-1]=a[i];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}