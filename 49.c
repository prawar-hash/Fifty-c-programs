#include <stdio.h>
#include <string.h>
struct Book {
    int bookNumber;
    char bookName[50];
    char author[50];
    float price;
};
int main()
{
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    getchar(); // To consume the newline left by scanf
    struct Book books[n];
    // Input book details
    for (int i = 0; i < n; i++)
    {
       printf("\nEnter details for book %d:\n", i + 1);
       printf("Book Number: ");
       scanf("%d", &books[i].bookNumber);
       getchar(); // Consume newline
       printf("Book Name: ");
       fgets(books[i].bookName, sizeof(books[i].bookName), stdin);
       books[i].bookName[strcspn(books[i].bookName, "\n")] = '\0'; // Remove newline
        
       printf("Author: ");
       fgets(books[i].author, sizeof(books[i].author), stdin);
       books[i].author[strcspn(books[i].author, "\n")] = '\0'; // Remove newline
       printf("Price: ");
       scanf("%f", &books[i].price);
       getchar(); // Consume newline
    }

    // Display all book records
    printf("\n===== BOOK STORE RECORD =====\n");
    printf("%-10s %-30s %-20s %-10s\n", "Book No", "Book Name", "Author", "Price");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
       printf("%-10d %-30s %-20s $%.2f\n", books[i].bookNumber, books[i].bookName, books[i].author, books[i].price);
    }
    return 0;
}
