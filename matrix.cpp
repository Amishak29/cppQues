// make a program to print a grid
#include <iostream>

using namespace std;
int main()
{
    int m,n;
    int c=0;
    cout<<"enter number of rows"<<endl;
    cin>>m;
    cout<<"enter number of column"<<endl;
    cin>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        c=c+1;
        cout<<c;
        cout<<"\t";
        }
        cout<<"\t";
        cout<<"\n";
    }
    
}
