#include <iostream>
using namespace std;
float avg(float *a,float *y){
    int n1,n2,n3,n4,n5;
    cin>>n1>>n2>>n3>>n4>>n5;
    *a=(n1+n2+n3+n4+n5)/5.0;
    *y=*a+n1+n2+n3+n4+n5;
    return 0.0;
}
int main(){
    float average,AddAvg;
    avg(&average,&AddAvg);
    cout<<average<<endl;
}