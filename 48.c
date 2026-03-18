#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int rollNumber;
    int marks[5];  // Marks for 5 subjects
    int total;
    float percentage;
};
int main()
{
   struct Student student;
   // Input student details
   printf("Enter student's name: ");
   fgets(student.name, sizeof(student.name), stdin);
   student.name[strcspn(student.name, "\n")] = '\0'; // Remove newline
   printf("Enter roll number: ");
   scanf("%d", &student.rollNumber);
   student.total = 0;
   printf("Enter marks for 5 subjects: \n");
   for (int i = 0; i < 5; i++)
   {
      printf("Subject %d: ", i + 1);
      scanf("%d", &student.marks[i]);
      student.total += student.marks[i];
   }
   student.percentage = student.total / 5.0;
   // Display marksheet
   printf("\n===== STUDENT MARKSHEET =====\n");
   printf("Name       : %s\n", student.name);
   printf("Roll Number: %d\n", student.rollNumber);
   printf("Marks:\n");
   for (int i = 0; i < 5; i++)
   {
      printf(" Subject %d: %d\n", i + 1, student.marks[i]);
   }
   printf("Total      : %d\n", student.total);
   printf("Percentage : %.2f%%\n", student.percentage);
   return 0;
}
