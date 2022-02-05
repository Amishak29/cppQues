// write a function to return first positive element of the input array of length n. pass by referance
#include <iostream>
using namespace std;
int Pos(int *arr,int size){
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            cout<<arr[i]<<" ";
            break;
        }
    }
    
    return 0;
} 

int main(){
    int arr[10]={-7,2,3,4,5,6,-7,-8,9,-10};

    //  for(int i=0;i<10;i++){
    //     if(arr[i]>0){
    //         cout<<arr[i]<<" first positive element of the array"<<endl;
    //     break;
    //     }
    // }  
    Pos(&arr[0],10);
}