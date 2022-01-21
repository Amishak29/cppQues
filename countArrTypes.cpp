// Q3 Take 20 integer inputs from user and print the following:
// number of positive numbers
// number of negative numbers
// number of odd numbers
// number of even numbers
// number of 0.
#include <iostream>
using namespace std;

int main(){
    int a,counter=0,b=0,c=0,d=0,e=0;
    cout<<"enter 20 numbers"<<endl;
    int arr[20];
    for(int i=0;i<20;i++){
        cin>>a;
        arr[i]=a;
        cout<<arr[i]<<endl;
    }
    for(int i=0;i<20;i++){
        if(arr[i]>0){
            counter+=1;
            
        }
        else if(arr[i]<0){
            b+=1;
           
        }
        else if(arr[i]==0){
            e=e+1;
        }
        if(arr[i]%2==0){
            c+=1;
            
        }
        else if(arr[i]%2!=0){
            d+=1;
        }
      

    }
    
        cout<<"number of positive numbers is/are: "<<counter<<endl;
  

        cout<<"number of negative numbers is/are: "<<b<<endl;
    
        cout<<"zeros is/are: "<<e<<endl;

        cout<<"number of even numbers is/are:"<<c<<endl;
  
        cout<<"number of odd numbers is/are:"<<d<<endl;
    
}