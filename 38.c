#include <stdio.h>
int main()
{
    int rowsA, colsA, rowsB, colsB;
    // Input dimensions of the first matrix
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &rowsA, &colsA);
    // Input dimensions of the second matrix
    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &rowsB, &colsB);
    // Check if multiplication is possible
    if (colsA != rowsB)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }
    int A[rowsA][colsA], B[rowsB][colsB], result[rowsA][colsB];
    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    // Initialize result matrix to 0
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            result[i][j] = 0;
        }
    }
    // Multiply matrices
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            for (int k = 0; k < colsA; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // Display the result
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
