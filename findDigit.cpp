//To find the digit in a given number

#include <iostream>

using namespace std;
int main()
{
    int a,b;
    cout<<"enter a number:"<<endl;
    cin>>a;
    int a0=a; //copied a for second loop 
    int n=18;
    int i;
    for( i=0; i<n; i++) //we have to declare i in global otherwise it would be applicable only for this particular loop not other
    {
        b = a % 10; 
        a = a / 10; //to know the number of digit in a

       // cout<<b<<endl;
       

        if(a==0)
        break;
    }
    int k=i+1;
    int arr[k];
    
    for(int j=0; j<k; j++)
    {

        b = a0 % 10; 
        a0 = a0 / 10; 
         arr[j]=b;
     //    cout<<arr[j]<<endl; //cant print here coz array is printing in reversed
    }
     for(int j=k-1; j>=0; j--) //reversing the array
          cout<<arr[j]<<endl; 
    return 0;
}

