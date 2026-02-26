#include<stdio.h>
int main()
{
    int i,n,a=-1,b=1,c;
    printf("Enter total terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d, ",c);
    }
    return 0;
}

