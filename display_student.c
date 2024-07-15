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
    printf("=================================================\n");


    for (int i = 0; i < num_students; i++) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n",
               students[i].name, students[i].roll_number, students[i].marks);
    }
}