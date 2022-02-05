//Q4  What will happen in this code?
    //  int a = 100, b = 200;
    //  int *p = &a, *q = &b;
    //  p = q;
// #include <iostream>
// using namespace std;
// int main(){
//     int a = 100, b = 200;
//     int *p = &a, *q = &b;    <=> int* p;(same)
//                                  p=&a;
//     p = q;
//     cout<<q<<endl;
//     cout<<p<<endl;                   int* P
// }
//The address of p and q will become same

// Q1  main( )
// {
//  int i = 5, j = 2 ;
//  junk ( &i, &j ) ;
//  printf ( "\n%d %d", i, j ) ;
// }
// junk ( int *i, int *j )
// {
//  *i = *i * *i ;
//  *j = *j * *j ;
// } 
// Q2  main( )
// {
//  int i = 4, j = 2 ;
//  junk ( &i, j ) ;
//  printf ( "\n%d %d", i, j ) ;
// }
// junk ( int *i, int j )
// {
//  *i = *i * *i ;
//  j = j * j ;
// } 



// Q3  {
//  float a = 13.5 ;
//  float *b, *c ;
//  b = &a ; /* suppose address of a is 1006 */ 
// c = b ;
//  printf ( "\n%u %u %u", &a, b, c ) ;   // 1st = address of a, 2nd= address of a, 3rd= address of a
//  printf ( "\n%f %f %f %f %f", a, *(&a), *&a, *b, *c ) ; // 1at=13.5 2nd=13.5 3rd= 13.5 4th= 13.5 , 5th = 13.5 
// } 


//01/02/2022

// Q1    Guess the Output
// void main(){
// double *ptr=100;    //assume address of p =200
// int i;
// for(i=0;i<=3;i++){
// printf("%d\n",ptr++);
// }
// }
// output => error

// Q2
// #include<stdio.h>
// int main(){
//    int a = 321;
//    char *ptr;
//    ptr =( char *)&a;
//    printf("%d ",*ptr);
//    return 0;
// }
// 101000001
// output =65 =>A

// Q3]
// #include<stdio.h>
// int main(){
// int * p , b;
// b = sizeof(p);
// printf("%d" , b);
// return 0;
// }
// output=>4

//Q4]
// #include<stdio.h>
// int main(){
// int i = 5;    //assume address of i = 200
// int *p;       //assume address of p = 400
// p = &i;
// printf(" %u %u", *&p , &*p);
// return 0;
// }
// answer  === 200, 200

//Q5]
// #include<stdio.h>  
// int main(){
// int i = 3; //adress of i = 200
// int *j;  //adress of j = 204
// int **k; ////adress of k = 208
// j = &i;
// k = &j;
// printf("%u %u %u",i,j,k);
// return 0;
// }
// Answer = i=3, k=204, j=200

//Q6]
// #include<stdio.h>
// int main(){
//    int a = 769;
//    char *ptr;
//    ptr =( char *)&a;
//    printf("%d ",*ptr);
//    return 0;
// }
// output =1

//Q7
// #include<stdio.h>
// int main(){
//     int * ptr ;
//     printf("%d", sizeof(ptr));
//     return 0;
// }
// output=> 4

// Q8
// #include<stdio.h>
// int main(){
//     int *ptr = 2;
//     printf("%d", sizeof(ptr));
//     return 0;
// }
// output=> error
//
// #include<stdio.h>
// int main(){
//     int i = 10;         //assume address of i = 200
//     char a = 'i';       //assume address of a = 400
//     float x = 10.0;     //assume address of x = 800
//     double y = 10;      //assume address of y = 1600
//     int *p = &i;
//     char *q = &a;
//     float *r = &x;
//     double *s = &y;
//     p++;
//     ++q;
//     r+=2;
//     printf("%d %f %c %f \n",p,r,q,s);
//     printf("%d",*(--p));
// }
// p = 204 q=401 r=808 s=1600 *(--p)=10 (pehele 200 then 204 then --p=200 and *--p=value at 200=10)

// 03/02/2022
// Q1]
#include <stdio.h>
int function ( int *m ); ////for returning address of a pointer int *function(int *m) is used
int main( )
{
 int i = 35, *z ;
 z = function ( &i ) ;
 printf ( "\n%d", z ) ;
}
int function ( int *m )    //for returning address of a pointer int *function(int *m) is used
{
 return ( m + 2 ) ;
} 
// error coz we cannot return address ever
// If we want to return address from a function then *function name is used at the time of declaration of function