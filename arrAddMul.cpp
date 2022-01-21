//Q5 Write a program to find the sum and product of all elements of an array.

#include <iostream>
using namespace std;
int main (){
    int arr[5],a,sum=0,product=1;
    cout<<"enter elements in the array";
    for(int i=0;i<5;i++){
        cin>>a;
        arr[i]=a;
        cout<<arr[i]<<endl;
        sum=sum+arr[i];
        
        product=product*arr[i];
        cout<<product<<endl;
    }
    cout<<"The sum of elements is:"<<sum<<endl;
    cout<<"The product of element is:"<<product<<endl;
}