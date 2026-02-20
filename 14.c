#include<stdio.h>
int main()
{
    int choice;
    float a,b,ans;
    printf("Enter First Number: ");
    scanf(" %f",&a);
    printf("Enter Second Number: ");
    scanf("%f",&b);
    printf("*MENU*\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        ans=a+b;
        printf("Sum of %.2f & %.2f is %.2f",a,b,ans);
        break;
    case 2:
        ans=a-b;
        printf("Difference of %.2f & %.2f is %.2f",a,b,ans);
        break;
    case 3:
        ans=a*b;
        printf("Product of %.2f & %.2f is %.2f",a,b,ans);
        break;
    case 4:
        ans=a/b;
        printf("Quotient of %.2f & %.2f is %.2f",a,b,ans);
        break;
    
    default:
        break;
    }
    return 0;
}



