#include <iostream>

using namespace std;
int main()
{
    int a,c,d=100,e=0;
    cout<<"enter a number"<<endl;
    cin>>a;
    int b=a;
    for(int i=0;i<=d;i++)
    {
        c=a%10;
        a=a/10;
        e=e*10+c;
        
        if(a==0)
        {
            break;
        }
        // cout<<a<<" ";
        
    }

    cout<<e<<" ";
    if(e==b)
    {
        cout<<"it is a palindrome"<<endl;
    }
    else{
        cout<<"it is not a paindrome"<<endl;
    }
}



