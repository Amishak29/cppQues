#include <stdio.h>
int fibbo (int a);
int main()
{
    int n,t,i;
    printf("Enter the terms upto which you want fibbonachi series");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {t=fibbo(i);
    printf("%d  ",t);
    }
}
int fibbo (int a)
{
    if(a==0)
        return 0;
    if(a==1)
        return 1;
    else
        return fibbo(a-1)+fibbo(a-2);
}