 //WAP to find the smallest largest and second smallest number in an array

 #include<iostream>
using namespace std;
int main()
{
int i,n,small,large=0,seclarge=0,secsmall; 
cout << "Enter the number of elements : ";
cin >> n;
cout << "Input the array elements : ";
int a[n];
for(i=0;i<n;i++){
    cin >> a[i];
    
}
small=a[0];
for(i=0;i<n;i++)
{
    if(a[i]>large){
    large=a[i];   
    // seclarge=large; 
    }
    
    

    if(a[i]<small){
        small=a[i];
        // secsmall=small;
    }
    
    
}
secsmall=large; // it is always less than largest element
for(i=0;i<n;i++){ //it is in second loop becuse we have to compare with largest element in first loop
    if(a[i]>seclarge && a[i]!=large){
        seclarge =a[i];
        // cout<<"hello";
    }
    if(a[i]<secsmall && a[i]!=small)   {     
        secsmall=a[i];
    }
}

cout<<seclarge<<" is second largest element"<<endl;
cout<<secsmall<<" is second smallest element"<<endl;


return 0;
}




// int main(){
//     int small,large=0,i;
//     int arr[10],brr[10];
//     for(i=0;i<10;i++){
//         cin>>arr[i];
//     }
//     for(i=0;i<10;i++){
//         if(arr[i]>large){
//         large=arr[i];
//         }
//         if(arr[i]<small){
//             small=arr[i];
//         }
//     }
//     for(i=0;i<10;i++){
//         if(a[i]>seclarge && arr[i]!=large){
//             seclarge=arr[i];
//         }
//         if(arr[i]<secsmall && arr[i]!=small){
//             secsmall=arr[i]
//         }
//     }
//     cout<<....
//     cout<<....

// }