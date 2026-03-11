#include <stdio.h>
int main()
{
  int arr[] = {12, 45, 2, 67, 34, 89, 23};
  int n = sizeof(arr)/sizeof(arr[0]);
  int greatest = arr[0];
  // Print the array
  printf("Array elements: ");
  for(int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  // Find greatest element
  for(int i = 1; i < n; i++)
  {
    if(arr[i] > greatest)
    {
        greatest = arr[i];
    }
  }
  printf("The greatest element is: %d\n", greatest);
  return 0;
}
