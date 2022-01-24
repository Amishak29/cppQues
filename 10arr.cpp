//Q10 Write a program to print sum, average of all numbers, smallest and largest element of an array.
#include <iostream>
using namespace std;
int main()
{
     int a[10],i,sum=0,greater=0;
     float avg;
     cout<<"Enter 10 Numbers:"<<endl;
     for(i=0;i<10;i++)
     {
          cin>>a[i];
          sum=sum+a[i];
          avg=sum/10.0;
     }
     cout<<"Sum of Array Element:"<<sum<<endl;
     cout<<"Average of Elements:"<<avg<<endl;
     for(i=0;i<10;i++){
          if(a[i]>greater)
               greater=a[i];
     }
     cout<<"biggest element: "<<greater<<endl;
     int small=a[0];
     for(i=0;i<10;i++){
          if(a[i]<small)
               small=a[i];
     }
    cout<<"smallest Element:"<<small<<endl;
     return 0;
}