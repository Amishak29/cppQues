//Q6 Find the largest and smallest elements of an array.
#include<iostream>
using namespace std;
int main()
{
int i,n,large=0; //This makes code filthy small=1000000000?? what if n is beyond this; 
cout << "Enter the number of elements : ";
cin >> n;
cout << "Input the array elements : ";
int a[n];
for(i=0;i<n;i++){
    cin >> a[i];
    //cout<<i<<endl;
}
small=a[0] // since we dont know the size of array hence 0. We can put the value of small to any array element to compare.
for(i=0;i<n;i++)
{
    if(a[i]>large) // 3 2 4 5 6
    large=a[i];

    if(a[i]<small)  
    small=a[i];
}

cout << "\nThe smallest element is: " << small << endl;
cout << "\nThe largest element is: " << large << endl;

return 0;
}