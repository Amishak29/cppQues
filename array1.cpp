//Q1 Take 10 integer inputs from user and store them in an array and print them on screen.

#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter 10 number you want to input in the array"<<endl;
    cin>>a;
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]=++a;
        cout<<arr[i]<<endl;
    }
}

++j--i++