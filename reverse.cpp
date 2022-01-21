#include <iostream>

using namespace std;
int main()
{
    int a,b,n=10000;
    cout<<"enter the number"<<endl;
    cin>>a;
    for(int i=1;i<=n;i++)
    {
        b=a%10;
        a=a/10;
        cout<<b;
        if(a==0)
        {
            break;
        }
    }
    
}