// Write a function to compute the distance between two points
// and use it to develop another function that will compute the
// area of the triangle whose vertices are A(x1, y1), B(x2, y2),
// and C(x3, y3). Use these functions to develop a function
// which returns a value 1 if the point (x, y) lines inside the
// triangle ABC, otherwise a value 0.
 #include <iostream>
 #include <cmath>
using namespace std;

float Distance(int x1, int x2, int y1, int y2){
    float dis;  
    dis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return dis;
}
float areaA(x1,x2,x3,y1,y2,y3){
    float s,area;
    a=dis(x1,y1,x2,y2);
    b=dis(x2,y2,x3,y3);
    c=dis(x3,y3,x1,y1);
    s=a+b+c/2.0;
    area = sqrt(s*(s - a)*(s - b)*(s - c));
    return area;
}
int main(){
    int a1,b1,a2,b2,a3,b3,a4,b4;
    float A1,A2,A3,A;
    cout<<"Enter x and y coordinate of first point"<<endl;
    cin>>a1>>b1;
    cout<<"Enter x and y coordinate of second point"<<endl;
    cin>>a2>>b2;
    cout<<"Enter x and y coordinate of third point"<<endl;
    cin>>a3>>b3;
    cout<<Distance(a1,b1,a2,b2)<<endl;
    cout<<Distance(a1,b1,a2,b2)<<endl;
    cout<<Distance(a2,b2,a3,b3)<<endl;
    cout<<"Enter a point to check"<<endl;
    A1=areaA(x1,y1,x2,y2,x4,y4);
    A2=areaA(x1,y1,x4,y4,x3,y3);
    A3=areaA(x2,y2,x3,y3,x4,y4);
    A=A1+A2+A3;
    if(A1+A2+A3==A){
        cout<<"The new point entered lies inside the triangle"<<endl;
    }
    else{
        cout<<"The new point entered doesnot lies inside the triangle"<<endl;
    }
}

