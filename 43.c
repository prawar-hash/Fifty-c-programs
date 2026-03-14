#include <stdio.h>
int main()
{
  char source[100], destination[100];
  int i = 0;
  // Input the source string
  printf("Enter the source string: ");
  fgets(source, sizeof(source), stdin);
  // Remove newline character if fgets is used
  if (source[i] != '\0')
  {
    int j = 0;
    while (source[j] != '\0' && source[j] != '\n')
    {
        j++;
    }
    source[j] = '\0';
  }
  // Copy string character by character
  while(source[i] != '\0')
  {
    destination[i] = source[i];
    i++;
  }
  destination[i] = '\0'; // Add null character at the end
  // Print the copied string
  printf("Copied string: %s\n", destination);
  return 0;
}
