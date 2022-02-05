#include <iostream>
using namespace std;

int max(int *x, int size){
    int w;
    for(int i=0;i<size;i++){
        w=*(x+i);
        cout<<w<<endl;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the length of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    max(arr,n);
}