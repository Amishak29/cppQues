// Q1 (Func)  Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
// Marks        Grade
// 91-100         AA
// 81-90          AB
// 71-80          BB
// 61-70          BC
// 51-60          CD
// 41-50          DD
// <=40          Fail
#include <iostream>
using namespace std;
string Grade(int a){
    if(a<40){
        cout<<"FAIL"<<endl;
    }
    else if(a<=50 && a>40){
        return "DD";
    }
    else if(a>50 && a<=60){
        return "CD";
    }
    else if(a<=70 && a>60){
        return "BC";
    }
    else if(a<=80 && a>70){
        return "BB";
    }
    else if(a<=90 && a>80){
        return "AB";
    }
    else{
        return "AA";
    }
    return "I am Done";
}
int main(){
    int x;
    string y;
    cin>>x;
    y=Grade(x);
    cout<<y<<endl;
}
