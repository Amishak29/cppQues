//convert any number given by the user to binary

#include <iostream>
#include <cmath>
using namespace std;
int main(){
 int a,rem,n=1000;
    cout<<"Write a number to convert it into  binary:"<<endl;
    cin>>a;
    for(int i=0;i<=n;i++)
    {
        rem=a%2;
        a=a/2;
        cout<<rem<<endl;
        if(a==0){
            break;
        }
    }
}