//swap without using 3rd variable
#include <iostream>

using namespace std;
int main()
{
    int a,b; // considering a=10,b=20
    cout<<"enter two numbers two swap"<<endl;
    cin>>a>>b;
    a=a+b; //a=30
    b=a-b; //b=30-20=10
    a=a-b; //a=30-10=20
    cout<<a<<" "<<b; 
}