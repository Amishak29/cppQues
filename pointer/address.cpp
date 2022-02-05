// Q1  Write a program to print the address of a variable whose value is input from user.
//Q2  Write a program to print the address of the pointer to a variable whose value is input from user. 
//Q3 using pointer printer adress of a at a. why line 19 is wrong? --- Address of a is not an integer
// 
#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr;
    cin>>a;
    ptr=&a;
    cout<<ptr<<endl; // Q2 
    cout<<*(ptr+1)<<endl;
    cout<<*ptr+1<<endl;
    cout<<&a<<endl;  //Q1
    //cout<<&(a+1)<<endl;
    cout<<&ptr<<endl;
    cout<<(&ptr+1)<<endl;
    // *ptr=&a;            //Q3
    // cout<<*ptr<<endl; // Q3
    cout<<a<<endl;
}


