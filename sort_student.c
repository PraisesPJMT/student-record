#include <stdio.h>
#include <string.h>

/**
 * Sorts an array of student_t structures based on their marks in ascending order.
 *
 * @param students pointer to an array of student_t structures
 * @param num_students number of students in the array
 *
 * @return void
 *
 * @throws None
 */
void sort_students(student_t *students, int num_students) {
    printf("=================================================\n");
    printf("-------------------------------------------------\n");
    printf("               Sorted Students by Marks\n");
    printf("-------------------------------------------------\n");
    printf("=================================================\n");
    for (int i = 0; i < num_students - 1; i++) {
        for (int j = 0; j < num_students - i - 1; j++) {
            if (students[j].marks > students[j + 1].marks) {
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
