#include<stdio.h>
int main()
{
    int s=0,x=1,n,r;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n !=0)
    {
        r=n%2;
        n=n/2;
        s=s+r*x;
        x=x*10;
    }
    printf("Binary= %d",s);
    return 0;
}

