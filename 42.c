#include <stdio.h>
int main()
{
  char str[100];
  int length = 0;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin); // Read string including spaces
  // Count characters until null character '\0'
  while(str[length] != '\0' && str[length] != '\n')
  {
    length++;
  }
  printf("Length of the string is: %d\n", length);
  return 0;
}
