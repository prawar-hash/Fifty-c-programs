#include <stdio.h>
#include <math.h>
int main()
{
  int num, temp, digit, sum, digits;
  printf("Armstrong numbers between 1 and 500 are:\n");
  for (num = 1; num <= 500; num++) 
  {
       temp = num;
       sum = 0;
       digits = 0;

       // Count digits
       int t = num;
       while (t > 0)
       {
           digits++;
           t /= 10;
       }
       // Calculate Armstrong sum
       while (temp > 0) 
       {
           digit = temp % 10;
           sum += pow(digit, digits);
           temp /= 10;
       }
	if (sum == num)
           printf("%d\n", num);
    }

    return 0;
}
