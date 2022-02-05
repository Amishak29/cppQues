// Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.
#include <iostream>
using namespace std;
#include <vector>
vector <int> maxMin(int num1, int num2, int num3){
    vector <int> arr(2);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            //cout<<"\n Largest number ="<<num1<<endl;
            arr[0]=num1;
            
        }
        else
        {
            //cout<<"\n Largest number ="<<num3<<endl;
            arr[0]=num3;
        }
    }
    else if (num2 > num3)
    {
        //cout<<"\n Largest number = "<<num2;
        arr[0]=num2;
    }
    else
    {
        //cout<<"\n Largest number = "<<num3;
        arr[0]=num3;
    }
    if(num1 < num2 && num1 < num3)
	{
		//cout<<num1<<" is smallest";
        arr[1]=num1;
	}
	else if(num2 < num3)
	{
		//cout<<num2<<" is smallest";
        arr[1]=num2;
	}
	else
	{
		//cout<<num3<<"is smallest";
        arr[1]=num3;
	}	
    return arr;
}
int main(){
    vector <int> x;
    int a,b,c,i;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    cout<<"Enter third number"<<endl;
    cin>>c;
    x=maxMin(a,b,c);
    cout<<x[0]<<" max"<<endl;
    cout<<x[1]<<" min"<<endl;
}