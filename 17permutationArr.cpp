// Input: nums = [0,2,1,5,3,4]
// Output: [0,1,2,4,5,3]
// Explanation: The array ans is built as follows: 
// ans = [nums[nums[0]], nums[nums[1]], nums[nums[2]], nums[nums[3]], nums[nums[4]], nums[nums[5]]]
//     = [nums[0], nums[2], nums[1], nums[5], nums[3], nums[4]]
//     = [0,1,2,4,5,3]

#include <iostream>
using namespace std;
int main(){
    int n,i,flag=0,a,c;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements in the array"<<endl;
   int  arr[n],brr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        // arr[flag]=a;
        // //brr[a]=c;
        // flag++;
        brr[i]=arr[arr[i]]; //nice logic
    }
    //cout<<i; // after loop ends condition not satisfied it will print i
    cout<<endl;
    for(i=0;i<n;i++){
    cout<<brr[i]<<endl;
    }
}
