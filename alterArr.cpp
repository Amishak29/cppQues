// Given first two array print third.
// 1 2 3 4 5
// 6 7 8 9 10
// 1 6 2 7 3 8 4 9 5 10
# include <iostream>
using namespace std;
int main(){
    int i=0,a[5]={1,2,3,4,5},b[5]={6,7,8,9,10},f1=0,f2=1;
    int arr[10];
    for(i=0;i<5;i++){
        arr[f1]=a[i];
        f1=f1+2;
    }
    f2=1;
    for(i=0;i<5;i++){
        arr[f2]=b[i];
        f2=f2+2;
    }
    for(i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}

