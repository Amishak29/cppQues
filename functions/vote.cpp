#include <iostream>
#include <string>
using namespace std;
string vote(int a){
    if(a>18){
        return "eligible to vote";
    }
    else{
        return "Not eligible to vote";
    }
}
int main(){
    int x;
    string y;
    cout<<"Enter the age of the candidate to vote"<<endl;
    cin>>x;
    y=vote(x);
    cout<<y<<endl;
}