#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector <float> circum(float a);
float area(int g);
int main(){
    int r,i;
    vector <float> x;
    cout<<"Enter the value of r"<<endl;
    cin>>r;
    x=circum(r);
    for(i=0;i<2;i++){
    cout<<x[i]<<endl;
    }
}
vector <float> circum(float a){
    vector <float> arr(2);
    int z,y;
    z= 2*M_PI*a;
    y=M_PI*a*a;
    arr[0]=z;
    arr[1]=y;
    return arr;
}
