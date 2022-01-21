//finding factorial of a number

#include <iostream>

using namespace std;
int main()
{
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }

    cout<<"factorial of a given number is:"<<fact;
}