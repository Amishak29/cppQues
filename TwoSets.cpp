#include <iostream>
using namespace std;

int main(){
    int n,target,i,j;
    cout<<"Enter the target you want to set"<<endl;
    cin>>target;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements in the array"<<endl;
    int nums[n];
    for(i=0;i<n;i++){
        cin>>nums[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                cout<<i<<j<<" ";
            }            
        }
    }
}