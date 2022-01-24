// Q8 Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays. E.g.-
// INITIAL array :
// 58    24    13    15    63    9    8    81    1    78

// After spliting :
// 58    24    13    15    63
// 9    8    81    1    78

#include <iostream>
using namespace std;

int main(){
    
    int arr[10],a[5],b[5];
    cout<<"enter 10 elements"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        if(i>=5){
            
            a[i-5]=arr[i];  //bcz a[i-5] ka index se shuru ho rha hai and we wnt arr ka index 5 se shuru ho naki a[i] ka.
        }
        else{
            b[i]=arr[i];
        }
    }
    for(int i=0;i<5;i++){
    
    cout<<"b ="<<b[i]<<" "<<endl;   
    }
    for(int i=5;i<10;i++){    // in a better way we can initialize i by 0 and avoid i-5
        cout<<"a ="<<a[i-5]<<" "<<endl;
    }
} 