#include <stdio.h>
#include <string.h>

/**
 * Modifies an existing student in the array of students.
 *
 * @param students pointer to an array of student_t structures
 * @param num_students number of students in the array
 *
 * @return void
 *
 * @throws None
 */
void modify_student(student_t *students, int num_students) {
    printf("=================================================\n");
    printf("-------------------------------------------------\n");
    printf("               Modifying Existing Student\n");
    printf("-------------------------------------------------\n");
    printf("=================================================\n");

    int roll_number;
    printf("Enter roll number to modify: ");
    scanf("%d", &roll_number);
    for (int i = 0; i < num_students; i++) {
        if (students[i].roll_number == roll_number) {
            printf("Enter new first name: ");
            scanf("%s", students[i].first_name);
            printf("Enter new last name: ");
            scanf("%s", students[i].last_name);
            printf("Enter new marks: ");
            scanf("%f", &students[i].marks);

            printf("\n '%s' Modified Successfully \n", students[i].first_name);
            printf("-------------------------------------------------\n");
            printf("=================================================\n");
            return;
        }
    }
    printf("Student not found.\n");

    printf("-------------------------------------------------\n");
    printf("=================================================\n");

}
