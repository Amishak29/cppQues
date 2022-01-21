//Print all the pythagorean triplets till 30
#include <iostream>

using namespace std;
int main()
{
      int a,b,c;
      for(int a=1;a<=30;a++)
      {

             for(int b=1;b<=30;b++){
                   if(a>b){
                  
                   
                        for(int c=1;c<=30;c++){
                         if(b>c){
                         if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
                         cout<<"It is a pythagorean triplet"<<endl;
                         cout<<a<<"\t"<<b<<"\t"<<c<<endl;
                         }
                        //cout<<a<<"\t"<<b<<"\t"<<c<<endl;

                  }
            
            }
            }
      }
}
}