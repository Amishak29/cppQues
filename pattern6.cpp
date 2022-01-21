// print star full triangle
//           *
//          * *
//         * * *
//        * * * *
//       * * * * *

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
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
