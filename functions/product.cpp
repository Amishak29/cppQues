//Define a function that returns the product of two numbers entered by user.
#include <iostream>
using namespace std;

float product(float a, float b){
    float c;
    c=a*b;
    return c;
}
int main(){
    int x,y,z;
    cout<<"enter first number"<<endl;
    cin>>x;
    cout<<"Enter second number"<<endl;
    cin>>y;
    z=product(x,y);
    cout<<"Product is:"<<z<<endl;
}