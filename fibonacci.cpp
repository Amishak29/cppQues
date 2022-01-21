//Print fibonacci series for all user input

#include <iostream>

using namespace std;
int main()
{
     int a=0,b=1,num,sum;
     cout<<"number of terms: "<<endl;
     cin>>num;
     cout<<"fibonacci series:"<<endl;
     for(int i=0; i<num; i++){
        cout<<a<<endl;
        sum=a+b;
        a=b;
        b=sum;
     }
}