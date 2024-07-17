#include <stdio.h>
#include <string.h>


/**
 * Adds a new student to the array of students.
 *
 * @param students pointer to an array of student_t structures
 * @param num_students pointer to the number of students in the array
 *
 * @return void
 *
 * @throws None
 */
void add_student(student_t *students, int *num_students) {
    printf("=================================================\n");
    printf("-------------------------------------------------\n");
    printf("               Adding A New Student\n");
    printf("-------------------------------------------------\n");
    printf("=================================================\n");

    printf("Enter student first name: ");
    scanf("%s", students[*num_students].first_name);
    printf("Enter student last name: ");
    scanf("%s", students[*num_students].last_name);

    int new_roll_number;
    int is_duplicate;

    do {
        printf("Enter roll number: ");
        scanf("%d", &new_roll_number);

        is_duplicate = 0;
        for (int i = 0; i < *num_students; i++) {
            if (students[i].roll_number == new_roll_number) {
                printf("Roll number %d is already assigned to another student.\nPlease choose a different roll number.\n", new_roll_number);
                is_duplicate = 1;
                break;
            }
        }
        if (is_duplicate == 0) {
            students[*num_students].roll_number = new_roll_number;
        }
    } while (is_duplicate == 1);

    printf("Enter marks: ");
    scanf("%f", &students[*num_students].marks);
    (*num_students)++;


    printf("\n New Student '%s' Added Successfully \n", students[*num_students - 1].first_name);
    printf("-------------------------------------------------\n");
    printf("=================================================\n");
}
