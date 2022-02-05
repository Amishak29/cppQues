#include <iostream>
using namespace std;
int ptr(int *p){
    cout<<p[1]<<endl;
    cout<<*(p+1)<<endl;
    return 0;
}
int main(){
    int x=5;
 //   int y=45;
    ptr(&x);
//     if(x>5){
//         x++;
//     }
//     cout<<"hemlo"<<endl;
//     int y=52;
//    cout<<y<<endl;
//     y=50;
//     int z=7;
//      ptr(&x);
   // cout<<&x<<" "<<&y;
}