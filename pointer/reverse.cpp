#include<iostream>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;
    int arr[n],brr[n];
    int i;
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}