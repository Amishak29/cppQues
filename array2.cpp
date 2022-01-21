//Q2 Take 10 integer inputs from user and store them in an array. Again ask user to give a number. Now, tell user whether that number is present in array or not. If present then how many number of times.

#include <iostream>
 using namespace std;
  int main(){
      int a,b,counter=0;
      int arr[10];
      for(int i=0;i<10;i++){
          cout<<"enter numbers"<<endl;
          cin>>a;
          arr[i]=a;
          cout<<arr[i]<<" "; //we got the array of 10 elements
      }    
      cout<<"enter the number to check in array"<<endl;
      cin>>b;

      for(int i=0;i<10;i++){
          
      if(b==arr[i]){
          counter=counter+1;
      }
      
    }
    cout<<"\nthe number is present for "<<counter<<" times."<<endl;
    if(counter==0)
    {
        cout<<" Hence the element is not present"<<endl;
    }
  }