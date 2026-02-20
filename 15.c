#include <stdio.h>
#define MAX 100
struct Employee {
    int id;
    char name[50];
    float basic;
    float hra;
    float da;
    float pf;
    float gross;
    float net;
};
int main()
{
    struct Employee emp[MAX];
    int choice, count = 0, i;
    do 
    {
       printf("\n--- Salary Management System ---\n");
       printf("1. Add Employee\n");
       printf("2. Display Employees\n");
       printf("3. Exit\n");
       printf("Enter your choice: ");
       scanf("%d", &choice);
       switch (choice)
       {
         case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &emp[count].id);
            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp[count].name);
            printf("Enter Basic Salary: ");
            scanf("%f", &emp[count].basic);
            // Salary calculations
            emp[count].hra = emp[count].basic * 0.20;
            emp[count].da  = emp[count].basic * 0.10;
            emp[count].pf  = emp[count].basic * 0.12;
            emp[count].gross = emp[count].basic + emp[count].hra + emp[count].da;
            emp[count].net   = emp[count].gross - emp[count].pf;
            printf("Employee added successfully!\n");
            count++;
            break;
        case 2:
            if (count == 0)
            {
                printf("\nNo employee records found.\n");
            } 
            else
            {
                printf("\n--- Employee Salary Details ---\n");
                for (i = 0; i < count; i++)
                {
                    printf("\nID: %d", emp[i].id);
                    printf("\nName: %s", emp[i].name);
                    printf("\nBasic Salary: %.2f", emp[i].basic);
                    printf("\nHRA: %.2f", emp[i].hra);
                    printf("\nDA: %.2f", emp[i].da);
                    printf("\nPF: %.2f", emp[i].pf);
                    printf("\nGross Salary: %.2f", emp[i].gross);
                    printf("\nNet Salary: %.2f\n", emp[i].net);
                }
            }
            break;
        case 3:
            printf("\nExiting program. Goodbye!\n");
            break;
        default:
            printf("\nInvalid choice. Try again.\n");
       }
   } 
    while (choice != 3);
    return 0;
}
