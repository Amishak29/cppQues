#include <iostream>
using namespace std;

int main(){
    int n,i,sum=0,flag;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int runningSum[n];
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++){
        cin>>runningSum[i];
    }    
    for(i=1;i<n;i++){
        runningSum[i]=runningSum[i-1]+runningSum[i];
    }
    for(i=0;i<n;i++){
        cout<<runningSum[i]<<" "<<endl;
    }
}

// i,n,runningSum[]