#include <stdio.h>
int main()
{
  int n, i, element, found = 0;
  // Input size of the array
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int arr[n];
  // Input array elements
  printf("Enter %d elements:\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  // Input element to search
  printf("Enter the element to search: ");
  scanf("%d", &element);
  // Search for the element
  for (i = 0; i < n; i++)
  {
    if (arr[i] == element)
    {
        found = 1;
        break;  // stop searching once found
    }
  }
  // Output result
  if (found)
  {
    printf("Element %d found at position %d.\n", element, i + 1);
  }
  else
  {
    printf("Element %d not found in the array.\n", element);
  }
  return 0;
}
