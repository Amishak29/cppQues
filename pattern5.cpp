//           *
//         * *
//       * * *
//     * * * *
//   * * * * *

#include <iostream>

using namespace std;
int main()
{
    int a,k;
    cout<<"Input number of rows"<<endl;
    cin>>a;
    for(int i=0;i<=a;i++){
        for(int k=a-i;k>0;k--)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}