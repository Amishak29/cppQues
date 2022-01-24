//* refer 11
//Q7  Write a C++ program to find and print all unique elements of a given array of integers.
 #include<iostream>
using namespace std;
int main()
{
    int counter=0,n,i;
    cout<<"enter an array element of size 10"<<endl;
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i]==arr[j] && i!=j){
                counter=counter+1;
                 
                // cout<<counter;
                 //counter value is incrmenting in every iteration hence we put counter=0 to avoid such situation and make counter start counting again from 0
            }
            
        }
       
        if(counter<1){
                cout<<arr[i]<<" ";
        }
        counter=0;
    }
    
}

//1 2 2 2  2  2  2  2 2 2 




















