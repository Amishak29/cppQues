// Write a C++ program to move all negative elements of an array of integers to the end of the array without changing the order of positive element and negative element.
// refer question 15 for doubt
#include <iostream>
using namespace std;
int main(){
    int a,b;
    
    cout<<"enter the size of the array"<<endl;
    cin>>b;
    int i,arr[b],brr[b],crr[i],drr[i],err[b],f1=0,f2=0;
    cout<<"Enter elements in the array"<<endl;
    
    for( i=0;i<b;i++){
        cin>>arr[i];
    }
    
    for( i=0;i<b;i++){
        if(arr[i]<0){
            crr[f1]=arr[i];
            f1++;
        }
        else{
            drr[f2]=arr[i];
            f2++;
        }
    }
    for( i=0;i<f1;i++){
        err[i]=crr[i];
    }
    for( i=0;i<f2;i++){
        err[i+f1]=drr[i];
    }
    cout<<"The array is:";
    for( i=0;i<b;i++){
    cout<<err[i]<<" ";
    }  
}



int main(){
    int i,a,b,c,e,arr[10],brr[10],neg[5],pos[5];
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    for(i=0;i<10;i++){
        if(arr[i]<0){
            a[b]=arr[i];
            b++;
        }
        else{
            e[c]=arr[i];
            c++;
        }
        
    }
    for(i=0;i<b;i++){
        brr[i]=a[i];
    }
    for(i=b;i<10;i++){
        brr[b]=e[i-b];
    }
    int(i=0;i<10;i++){
    cout<<brr[i]<<" ";
    }
}
