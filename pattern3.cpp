//1
//1 2
//1 2 3 
//1 2 3 4
//1 2 3 4 5 

#include <iostream>

using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    cout<<"ENter the number of rows"<<endl;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++){
        cout<<j;
        }
        cout<<"\n";
    }
    
}