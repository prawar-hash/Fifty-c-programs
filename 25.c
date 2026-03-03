#include <stdio.h>
int main()
{
  long long number;
  int digit;
  int found = 0; // flag to indicate if the digit is found
  // Input from the user
  printf("Enter a number: ");
  scanf("%lld", &number);
  printf("Enter the digit to search for: ");
  scanf("%d", &digit);
  // Make a copy of number to work with
  long long temp = number;
  // Search for the digit
  while (temp != 0)
  {
       int lastDigit = temp % 10;
       if (lastDigit == digit) 
       {
           found = 1;
           break;
       }
       temp = temp / 10;
   }

   // Output result
   if (found)
   {
     printf("Digit %d is present in the number %lld.\n", digit, number);
   } 
   else
   {
      printf("Digit %d is NOT present in the number %lld.\n", digit, number);
   }
  return 0;
}

