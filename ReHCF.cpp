#include <iostream>

using namespace std;
int main(){
    int a,b,temp,n=1000,remainder;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    // if(b>a){
    //     temp=b;
    //     b=a;
    //     a=temp;      
    // }
    //cout<<a<<b;
    //a=bq+r
    for(int i=0;i<=n;i++){
        remainder=a%b;
        a=a/10;
        if(remainder==0){
            break;
        }
        a=b;
        b=remainder;
    }
    cout<<b<<" is HCF of the given two number"<<endl;
}
