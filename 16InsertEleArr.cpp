//Q2  Insert element at specific position in array
#include <iostream>
using namespace std;

int main(){  
    int i,a,pos,n;
    
    cout<<"enter the position you want to insert"<<endl;
    cin>>pos;
    cout<<"Enter the element you want to insert at the specific index"<<endl;   // 1112 344564
    cin>>a;
    cout<<"Enter the elements of array"<<endl;
    int arr[10],brr[11],b[10],c[10];
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    // for(i=0;i<10;i++){
    //     arr[i]=brr[i];       
    // }
     for(i=0;i<pos;i++){
         b[i]=arr[i];
     }
     
     for(i=pos;i<10;i++){
         c[i-pos]=arr[i];
     }
     for(i=0;i<11;i++){
         brr[i]=b[i];     
     }    
     brr[pos]=a;
     for(i=pos+1;i<11;i++){
      brr[i]=c[i-pos-1];
    }
     for(i=0;i<11;i++){
         cout<<brr[i]<<" ";
     }
}