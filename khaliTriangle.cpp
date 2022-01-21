// print star pyramid
// 
//           *
//          * *
//         *   *
//        *     *
//       *********

#include <iostream>

using namespace std;
int main()
{
    int a;
    cout<<"enter number of rows"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int b=a-i;b>0;b--){  //if a=5 first row=5-1, second=5-2, third=5-3....
            cout<<" ";
            
        }
        for(int j=1;j<=2*i-1;j++){
            if(i==1||j==1){ // peeche wala slanting line
                cout<<"*";
            }
            else if(i==a){
                cout<<"*"; // to print star in the last row
            }
            else{
                cout<<" ";
            }
            if(j==2*i-2 && i!=a){ // aage wala slanting line i!=a is to remove extra star 
                cout<<"*";        
            }
            
        }        
        cout<<"\n";
    }
}