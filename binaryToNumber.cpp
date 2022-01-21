//conver binary to number for any given input
#include <iostream>
#include <cmath>
using namespace std;
int main(){
 int a,b,c,n=1000,e=0;
 cout<<"Input a number in binary:"<<endl;
 cin>>a;
 for(int i=0;i<=n;i++){
     b=a%10;
     a=a/10;
        
      if(b==1){
         e=e+b*pow(2,i);       
          
     }
     if(a==0){
         break;
         
     }
     
 }
 cout<<e<<endl; 
}