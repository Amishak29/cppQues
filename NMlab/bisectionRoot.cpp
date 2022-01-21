//Write a computer oriented C/C++ program for bisection method to solve smallest positive root of the following equation xe^x-2=0
// #include <bits/stdc++.h>
// #include<cmath>
#include <iostream>
#include <cmath>
using namespace std;
#define e=0.000001;
#define f(x)= x*exp(x)-2


int main(){
    double x0,x1;
    double m,f0,f1,f2,i=0;
    x0=0;
    x1=1;
    f0=f(x0);
    calculation:
    x1=x0-1;
    f1=f(x1);
    if(f0*f1>0){
        x0=x1;
        goto calculation;
    }



    do{
        f0=f(x0);
        f1=f(x1);
        m=(x0+x1)/2;
        f2=f(m);
        if(f0*f2<0){
            x1=m;
            f1=f(x1);
        }else{
            x0=m;
            f0=f(x0);
        }
        i++;
        cout<<"Solution is "<<m;
    
    }while(fabs(f2)>pow(10,5));
    return 0;
}