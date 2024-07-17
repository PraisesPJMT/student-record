 #include <stdio.h>
#include <string.h>

/**
 * Removes a student from the list of students.
 *
 * @param students pointer to an array of student_t structures
 * @param num_students pointer to the number of students in the array
 *
 * @return void
 *
 * @throws None
 */
void remove_student(student_t *students, int *num_students) {
    printf("=================================================\n");
    printf("-------------------------------------------------\n");
    printf("               Removing Existing Student\n");
    printf("-------------------------------------------------\n");
    printf("=================================================\n");
    int roll_number;
    printf("Enter roll number to remove: ");
    scanf("%d", &roll_number);

    int index = -1;
    char remove_student[50];
    for (int i = 0; i < *num_students; i++) {
        if (students[i].roll_number == roll_number) {
            index = i;
            strcpy(remove_student, students[i].first_name);
            break;
        }
    }

    if (index != -1) {
        for (int i = index; i < *num_students - 1; i++) {
            students[i] = students[i + 1];
        }
        (*num_students)--;

        printf("\n '%s' Removed Successfully \n", remove_student);
        memset(remove_student, 0, sizeof(remove_student));

    } else {
        printf("Student not found.\n");
    }

    printf("-------------------------------------------------\n");
    printf("=================================================\n");
}
