#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, r1, r2, real, imag;

    printf("Enter values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;   // discriminant

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different\n");
        printf("Root 1 = %.2f\nRoot 2 = %.2f", r1, r2);
    }
    else if (d == 0)
    {
        r1 = -b / (2*a);
        printf("Roots are real and equal\n");
        printf("Root = %.2f", r1);
    }
    else
    {
        real = -b / (2*a);
        imag = sqrt(-d) / (2*a);
        printf("Roots are complex\n");
        printf("Root 1 = %.2f + %.2fi\n", real, imag);
        printf("Root 2 = %.2f - %.2fi", real, imag);
    }

    return 0;
}

