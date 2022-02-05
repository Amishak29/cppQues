#include <iostream>
using namespace std;
#include <string>
string Prime(int a){
    
    for(int i=2;i<a-1;i++){
        if(a%i==0){
            return "It is not a prime";
        }
        else{
            return "It is a prime";
        }
    }
    return "hemlo";
}
int main(){
        int x;
        cout<<"Enter a number to check"<<endl;
        cin>>x;
        cout<<Prime(x)<<endl;
}