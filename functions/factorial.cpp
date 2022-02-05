#include <iostream>
using namespace std;
#include <string>
int factorial(int a){
    int b=1;
    
    for(int i=1;i<=a;i++){
       
        b=b*i;        
    }
     cout<<"the factorial is:"<<endl;
    return b;
}
int main(){
    int n;
    cout<<"Enter a number you want to find factorial of:"<<endl;
    cin>>n;
    cout<<factorial(n)<<endl;
}

