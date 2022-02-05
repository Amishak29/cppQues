//Q5  (Func) Any year is entered through the keyboard. Write a function to determine whether the year is a leap year or not.
#include<iostream>
using namespace std;
string LeapYear(int year) {
   if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
   return "it is a leap year";
   else{
   return "it is not a leap year";
   }
   return "smile";
}
int main(){
    int a;
    string b;
    cin>>a;
    b=LeapYear(a);
    cout<<b<<endl;
}
