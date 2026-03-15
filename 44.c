#include <stdio.h>
int main()
{
  char str[100];
  int length = 0, i;
  char temp;
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
   // Reverse the string by swapping
   for (i = 0; i < length / 2; i++)
   {
      temp = str[i]; 
      str[i] = str[length - i - 1];
      str[length - i - 1] = temp;
   }
   // Print reversed string
   printf("Reversed string: %s\n", str);
   return 0;
}
