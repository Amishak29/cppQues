#include <iostream>

using namespace std;
int main()
{
    int m;
    cout<<"enter a number"<<endl;
    cin>>m;
    for(int i=1;i<=m/2;i++)
    {
        if(m%i==0)
        cout<<i<<endl;
        if(m%i!=0)
        {
            cout<<"it is not a prime number";
        }
        else{
            cout<<"it is a prime number";
        }
    } 
    cout<<m;
}