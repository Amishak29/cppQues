#include <iostream>
using namespace std;
#include <string>
string evenOdd(int a){
    if(a%2==0){
        return "It is even";
    }
    else{
        return "It is odd";
    }
    
}
int main(){
    int a;
    cin>>a;
    cout<<evenOdd(a)<<endl;
}