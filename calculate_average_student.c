
#include <stdio.h>
#include <string.h>


/**
 * Calculates the average marks of a given array of students.
 *
 * @param students pointer to an array of student_t structures
 * @param num_students number of students in the array
 *
 * @return void
 *
 * @throws None
 */
void calculate_average(student_t *students, int num_students) {
    printf("=================================================\n");
    printf("-------------------------------------------------\n");
    printf("               Calculating Average Marks\n");
    printf("-------------------------------------------------\n");
    printf("=================================================\n");
    float total_marks = 0;
    for (int i = 0; i < num_students; i++) {
        total_marks += students[i].marks;
    }
    printf("Average marks: %.2f\n", total_marks / num_students);

    printf("-------------------------------------------------\n");
    printf("=================================================\n");
}

