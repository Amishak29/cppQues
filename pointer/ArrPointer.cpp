#include <iostream>
using namespace std;
int main(){
    int A[]={2,3,4,5,6};
    int i;
   // int *ptr=A;
    for(i=0;i<5;i++){
        cout<<*(A+i)<<endl;
    }
}