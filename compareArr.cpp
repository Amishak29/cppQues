//Q6 Find the largest and smallest elements of an array.
#include <iostream>
 using namespace std;
  int main(){
      int a,largest=0,smallest=0;
      int arr[n];
      cout<<"enter the elements in the array"<<endl;
      for(int i=0;i<n;i++){
          cin>>a;
          arr[i]=a;
          if(arr[i]>largest){
              largest=arr[i];
          }
          if(arr[i]<smallest){
              smallest=arr[i];
          }
      }
      cout<<"The largest element is:"<<largest<<endl;
      cout<<"The smallest element is:"<<smallest<<endl;
  }