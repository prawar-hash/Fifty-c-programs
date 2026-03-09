#include<stdio.h>
int main()
{
    int x,n,r,s=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+r*r*r;
    }
    if(s==x)
    {
        printf("It is an Armstrong number! ");
    }
    else
    {
        printf("It is not an Armstrong number! ");
    }
    return 0;
}