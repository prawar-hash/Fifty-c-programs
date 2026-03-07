#include<stdio.h>
int main()
{
    int s=0,x=1,n,r;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n !=0)
    {
        r=n%10;
        n=n/10;
        s=s+r*x;
        x=x*2;
    }
    printf("Decimal= %d",s);
    return 0;
}