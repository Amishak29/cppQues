#include <iostream>

using namespace std;
int main()
{
    float a,b,c;
    
    cout<<"Enter first side of a triangle"<<endl;
    cin>>a;
    cout<<"Enter second side of a triangle"<<endl;
    cin>>b;
    cout<<"Enter third side of a triangle"<<endl;
    cin>>c;
     if(a == b && b == c && c==a)
      cout<<"It is a equilateral triangle"<<endl;
     else if(a == b || b == c || c == a)
      cout<<"It is a isosceles triangle"<<endl;
     else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
     cout<<"It is a right angle triangle"<<endl;
     else{
         cout<<"It is a scalene triangle";
     }
   return 0;
}