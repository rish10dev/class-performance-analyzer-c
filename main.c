#include <stdio.h>

int main() {
    int students, marks1, marks2, marks3;
    int total;
    float average, classTotal = 0;

    printf("Enter number of students (max 8): ");
    scanf("%d", &students);

    if (students <= 0 || students > 8) {
        printf("Invalid number of students.\n");
        return 0;
    }

    for (int i = 1; i <= students; i++) {
        printf("\nEnter marks for Student %d:\n", i);
        printf("Subject 1: ");
        scanf("%d", &marks1);
        printf("Subject 2: ");
        scanf("%d", &marks2);
        printf("Subject 3: ");
        scanf("%d", &marks3);

        total = marks1 + marks2 + marks3;
        average = total / 3.0;
        classTotal += average;

        printf("Total: %d\n", total);
        printf("Average: %.2f\n", average);

        if (average >= 75)
            printf("Performance: Excellent\n");
        else if (average >= 50)
            printf("Performance: Good\n");
        else
            printf("Performance: Needs Improvement\n");
    } 

    printf("\nClass Average: %.2f\n", classTotal / students);

    return 0; 
} 