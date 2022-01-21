//  WAP to print n row of the pattern (take n as input from user)
// 1
// 2 2
// 3 3 3 
// 4 4 4 4
// . . . . .
// . . . . . .
#include <iostream>

using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of rows"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<"\n";
    }
}