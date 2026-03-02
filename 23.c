#include <stdio.h>
int main()
{
  int n, i, j;
  long long fact, power;
  double term, sum = 0;
  printf("Enter number of terms: ");
  scanf("%d", &n);
  for(i = 1; i <= n; i++)
  {
     /* Calculate factorial */
     fact = 1;
     for(j = 1; j <= i; j++)
     {
        fact *= j;
     }

     /* Calculate power i^i */
     power = 1;
     for(j = 1; j <= i; j++)
     {
           power *= i;
     }

     term = (double)power / fact;
     if(i % 2 == 0)
     sum -= term;
     else
        sum += term;
     printf("%+.2lf ", term);
  }
  printf("\nSum of series = %.2lf", sum);
  return 0;
}
