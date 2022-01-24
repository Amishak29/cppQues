//Q5  Write a C++ program to separate even and odd numbers of an array of integers. Put all even numbers first, and then odd numbers.


#include <iostream>
using namespace std;
int main()
{
    int arr[10],even[10],odd[10],brr[20],f1=0,f2=0,i;
    cout<<"Input numbers in the array";
    for( i=0;i<10;i++)
        cin>>arr[i];
    for( i=0;i<10;i++)
    {
            if(arr[i]%2==0){
                even[f1]=arr[i];
            f1++;
            }
            else {
                odd[f2]=arr[i];
            f2++;    //indexing of arr[], even[] and odd[] is not same hence used f1 and f2 for independent slicing
            }
    }
    // cout<<"The even numbers are: ";
    // for(i=0;i<f1;i++)
    //     cout<<even[i]<<" ";
    // cout<<"\nThe odd numbers are: ";
    // for(i=0;i<f2;i++){
    //     cout<<odd[i]<<" ";
    // }
    for(i=0;i<f1;i++){
        brr[i]=even[i];
    }
    for(i=0;i<f2;i++){  //since the indexing will start from the place where f1 ends
        brr[i+f1]=odd[i];
    }
    cout<<"\nThe array is:";
    for(i=0;i<10;i++){
    cout<<brr[i]<<" ";  //combined both the array with even[],odd[]
    }
}
