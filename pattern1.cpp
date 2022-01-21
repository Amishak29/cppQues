//*
//**
//***
//****

#include <iostream>

using namespace std;
int main()
{
    int a;
    cout<<"enter the number of rows"<<endl;
    cin>>a;
    for(int i=0;i<=a-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}