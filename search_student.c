#include <stdio.h>
#include <string.h>



/**
 * Searches for a student in the given array of students based on the roll number provided by the user.
 *
 * @param students pointer to an array of student_t structures
 * @param num_students number of students in the array
 *
 * @return void
 *
 * @throws None
 */
void search_student(student_t *students, int num_students) {
    printf("=================================================\n");
    printf("-------------------------------------------------\n");
    printf("               Searching For A Student\n");
    printf("-------------------------------------------------\n");
    printf("=================================================\n");

    int roll_number;
    printf("Enter roll number to search: ");
    scanf("%d", &roll_number);
    for (int i = 0; i < num_students; i++) {
        if (students[i].roll_number == roll_number) {
            printf("Name: %s, Marks: %.2f\n",
                   students[i].name, students[i].marks);

            printf("-------------------------------------------------\n");
            printf("=================================================\n");
            return;
        }
    }
    printf("Student not found.\n");

    printf("-------------------------------------------------\n");
    printf("=================================================\n");
}