//find hcf of two given number
#include <iostream>

using namespace std;
int main()
{
    int a,b,n=10000,temp;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    int quotient, rem;
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
            cout<<b<<" is HCF";
            break;
        }
        else if(rem==1)
        {
            cout<<"1 is HCF";
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
    

}