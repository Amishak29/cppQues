// Write a function power ( a, b ), to calculate the value of a
// raised to b. 
// by using pass by reference

#include <iostream>
#include <cmath>
using namespace std;
int POwer(int m, int n, int *power){
    *power=pow(m ,n);
    return 0;
}
int powerWow(int k,int l){
    int m=l;
    m=1;
    // for(int i=1;i<=l;i++){
    //     m=m*k;
    // }
    while(l--){
        m=m*k;
        //l--;
    }
    return m;
}
int main(){
    int power,a,b,x;
    cin>>a>>b;
  //  POwer(a,b,&power);
   x= powerWow(a,b);
   // cout<<power<<endl
   cout<<x<<endl;
   if(4){
       cout<<"Hemlo";
   }
}
