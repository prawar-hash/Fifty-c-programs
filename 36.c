#include <stdio.h>
int main()
{
  int arr[100], n, i, element, pos, after_value;
  char choice;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter array elements: ");
  for(i = 0; i < n; i++) scanf("%d", &arr[i]);
  printf("Original array: ");
  for(i = 0; i < n; i++) printf("%d ", arr[i]);
  printf("\n");
  printf("Insert by (p)osition or (v)alue? ");
  scanf(" %c", &choice);
  if(choice == 'p')
  {
    printf("Enter element to insert: ");
    scanf("%d", &element);
    printf("Enter position (0-based index): ");
    scanf("%d", &pos);
    if(pos >= 0 && pos <= n)
    {
        for(i = n; i > pos; i--) arr[i] = arr[i-1];
        arr[pos] = element;
        n++;
    } 
    else
    {
        printf("Invalid position!\n");
    }
   } 
   else if(choice == 'v')
   {
    printf("Enter element to insert: ");
    scanf("%d", &element);
    printf("Enter value after which to insert: ");
    scanf("%d", &after_value);
    int found = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == after_value) 
        {
            for(int j = n; j > i+1; j--) arr[j] = arr[j-1];
            arr[i+1] = element;
            n++;
            found = 1;
            break;
        }
    }
    if(!found) printf("%d not found in array.\n", after_value);
    } else {
        printf("Invalid choice!\n");
   }
   printf("Array after insertion: ");
   for(i = 0; i < n; i++) printf("%d ", arr[i]);
   printf("\n");
   return 0;
}
