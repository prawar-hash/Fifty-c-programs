#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int flag =0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("It is not a Prime Number! ");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("It is a Prime Number! ");
    }
    return 0;
}

