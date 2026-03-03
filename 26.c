#include <stdio.h>
int main()
{
  long long number, originalNumber, reversedNumber = 0;
  int remainder;
  // Input from user
  printf("Enter a number: ");
  scanf("%lld", &number);
  originalNumber = number; // store original number
  // Reverse the number
  while (number != 0)
  {
    remainder = number % 10;            // get last digit
    reversedNumber = reversedNumber * 10 + remainder; // build reversed number
    number = number / 10;               // remove last digit
  }
  // Check if original number and reversed number are the same
  if (originalNumber == reversedNumber)
  {
       printf("%lld is a palindrome.\n", originalNumber);
  }
  else
  {
    printf("%lld is NOT a palindrome.\n", originalNumber);
  }
  return 0;
}
