#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<ptr<<endl; //stores address of a
    cout<<*(ptr)<<endl; // dereference
    cout<<*ptr+1<<endl; // changing the value of a
    cout<<*(ptr+1)<<endl; //garbage value
    
}