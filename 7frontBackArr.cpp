// /Q7 Write a program to check if elements of an array are same or not it read from front or back. E.g.-
// 2    3    15    15    3    2

#include <iostream>

using namespace std;
int main(){
    int a,b=0,arr[11],brr[11],temp,flag=0;
    cout<<"Enter the elements in the array"<<endl;
    
    for(int i=0;i<11;i++){
        cin>>arr[i];
        //arr[i]=brr[i];
    }
    for(int i=0;i<11;i++){
        brr[i]=arr[i]; // arr ki value brr me assign ho rhi hai #method2
    }
    for(int i=0;i<5;i++){ // we will run the loop 5 baar tak hi to avoid the case of double swap
        //arr[i]=arr[10-i-1] // it is not the way to reverse kyuki adha ke baad same value aa rha hai
        //c[i]=arr[10-i-1]  1st method of swapping 1 2 3 4 5 6 7 8 9 10 // in this loop 10 baar chalana padd rha hai 
        temp=arr[i];
        arr[i]=arr[11-i-1]; //method2 
        arr[11-i-1]=temp;
    }
    for(int i=0;i<11;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"the elements are:"<<endl;

    for(int i=0;i<11;i++){
        //cout<<arr[i];
        if(brr[i]==arr[i]){
            flag=flag+1;
            //cout<<"On reversing the elements the array is same"<<endl;

        }
        

    }
    if(flag>=5){
        cout<<"Palindromic array"<<endl;
    }
    else{
        cout<<"Not a palindromic array"<<endl;
    }
}