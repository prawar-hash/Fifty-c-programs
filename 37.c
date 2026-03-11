#include <stdio.h>
int main()
{
   int arr[100], n, i, j, temp;
   // Input array elements until -1 is entered
   n = 0;
   printf("Enter array elements (enter -1 to stop):\n");
   while(1)
   {
      int num;
      scanf("%d", &num);
      if (num == -1) break;
      arr[n++] = num;
   }
   // Print original array
   printf("Original array: ");
   for(i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
   // Bubble Sort
   for(i = 0; i < n - 1; i++)
   {
      for(j = 0; j < n - i - 1; j++)
      {
         if(arr[j] > arr[j + 1])
         {    // Swap if current element is greater
              temp = arr[j];
              arr[j] = arr[j + 1];
              arr[j + 1] = temp;
         }
      }
    }
    // Print sorted array
    printf("Sorted array (ascending order): ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
