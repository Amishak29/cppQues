#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
 int temp;
 temp=*x;

 *x=*y;

 *y=temp;

}

int main()
{
 
    int a,b;
    cout<<"Enter Two Numbers To Swap: "<<endl;
    cin>>a>>b;
    
    swap(&a,&b);
    
    cout<<"After Swapping Two Numbers: ";
    cout<<a<<" "<<b;
    
    
}
