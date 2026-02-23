#include<stdio.h>
int main()
{
    int x=0,i,n;
    printf("Enter the total terms:");
    scanf("%d, ",&n);
    for(i=1;i<=n;i++)
    {
        x=x+i;
        printf("%d,",x);
    }
    return 0;
}

