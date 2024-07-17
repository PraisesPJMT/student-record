#include <stdio.h>
#include <string.h>

/**
 * Displays information about all students in the given array.
 *
 * @param students pointer to an array of student_t structures
 * @param num_students number of students in the array
 *
 * @return void
 *
 * @throws None
 */
void display_students(student_t *students, int num_students) {
    printf("=================================================\n");
    printf("-------------------------------------------------\n");
    printf("               Displaying All Students\n");
    printf("-------------------------------------------------\n");
    printf("=================================================\n\n");

    for (int i = 0; i < num_students - 1; i++) {
        for (int j = 0; j < num_students - i - 1; j++) {
            if (students[j].roll_number > students[j + 1].roll_number) {
                student_t temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("--------------------------------------------\n");
    printf("| %-5s | %-21s | %-5s |\n", "Roll No.", "Full Name", "Marks");
    printf("--------------------------------------------\n");

    for (int i = 0; i < num_students; i++) {
        printf("| %-8d | %-10s %-10s | %-5.2f |\n",
            students[i].roll_number, students[i].first_name, students[i].last_name, students[i].marks);
    }
    printf("--------------------------------------------\n");
    printf("=================================================\n");
}
