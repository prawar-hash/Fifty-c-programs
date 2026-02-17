#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    printf("Enter marks of 5 subjects(Out of 100): ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    if (m1 >= 35 && m2 >= 35 && m3 >= 35 && m4 >= 35 && m5 >= 35)
    {
        printf("Total Marks = %d\n", total);
        printf("Percentage = %.2f%%\n", percentage);
        printf("Result: PASS");
    }
    else
    {
        printf("Total Marks = %d\n", total);
        printf("Percentage = %.2f%%\n", percentage);
        printf("Result: FAIL");
    }

    return 0;
}
