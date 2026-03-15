#include <stdio.h>
int main()
{
  char str[100];
  int length = 0, i, flag = 1; // flag=1 means palindrome initially
  // Input string
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  // Remove newline character if fgets used
  if (str[0] != '\0')
  {
    int j = 0;
    while (str[j] != '\0' && str[j] != '\n')
    {
        j++;
    }
    str[j] = '\0';
   }
   // Find length manually
   while (str[length] != '\0')
   {
      length++;
   }
   // Check palindrome by comparing characters
   for (i = 0; i < length / 2; i++)
   {
      if (str[i] != str[length - i - 1])
      {
        flag = 0; // Not palindrome
        break;
      } 
    }
    if (flag)
    {
        printf("The string is a palindrome.\n");
    } 
    else
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
