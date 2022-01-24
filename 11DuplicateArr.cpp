//Q1  Find Duplicate Elements in Array
// refer 14
#include <iostream>
using namespace std;
int main(){
    int a,b,i,j,counter=0;;
    float arr[10];
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(arr[i]==arr[j] && i!=j ){ // It is becoming a triangle if loop i=0; i<10 karte toh 2 baar compare hota and neeche printing me 2 baar print hota 
                counter++;
                arr[j]=0.1;       
          }
          
        }
       if(counter>=1 && arr[j]!=0.1 && arr[i]!=0.1 ){
           cout<<arr[i]<<" ";
       }
       counter=0;
    }
    
}



































