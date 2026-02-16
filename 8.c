#include<stdio.h>
int main()
{
    int age;
    char gender;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Boy or girl?\nif boy press b\nif girl press g\n");
    scanf(" %c",&gender);
    if (gender=='b'||gender=='B')
    {
        if (age>=21)
        {
            printf("Eligible for marriage!");
        }
        else
        {
            printf("Not Eligible for marriage!");
        }
    }
    else if (gender=='g'||gender=='G')
    {
        if (age>=18)
        {
            printf("Eligible for marriage!");
        }
        else
        {
            printf("Not Eligible for marriage!");
        }
    }
    else
    {
        printf("Invalid Input!!!");
    }
    return 0; 
}


