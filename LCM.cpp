//to find LCM of a givem two numbers
//LCM*HCF=product of two input numbers
#include <iostream>

using namespace std;
int main()
{
    int a,b,n=10000,temp,LCM;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    int quotient, rem,c;
    c=a*b;
    if(b>a)
    {
        temp=b;
        b=a;
        a=temp;
    }
    
    //a=b*quotient+rem
    for(int i=0;i<=n;i++)
    {
        rem=a%b;
        //cout<<rem<<endl;
        if(rem==0)
        {
            cout<<b<<"HCF is:"<<endl;
            break;
        }
        else if(rem==1)
        {
            cout<<"HCF is:"<<endl;
            break;
        }
        else{
             a=b;
             b=rem; //value of rem is assigned to b and not the opposite
             if(rem==0){
             break;
             }
        }
    }
    LCM=c/b;
    if(rem==1){
        cout<<"The LCM is:"<<a*b<<endl;
    }
    else{
    cout<<" lcm is:"<<endl;
    cout<<LCM<<endl;
    }
}