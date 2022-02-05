#include <iostream>
using namespace std;
int main(){
    int a=1090;
    int *ptr;
    ptr=&a;
    cout<<ptr<<"\n"<<*ptr<<endl;
    char *ptr1;
    ptr1=(char*)ptr;
    cout<<ptr1<<"\n"<<*ptr1<<endl;
    cout<<ptr1+1;

}