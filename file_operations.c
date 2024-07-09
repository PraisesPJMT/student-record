#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Saves the given array of student_t structures to a file named "students.txt".
 *
 * @param students pointer to an array of student_t structures
 * @param num_students number of students in the array
 *
 * @return void
 *
 * @throws None
 */
void save_to_file(student_t *students, int num_students) {
    printf("=================================================\n");
    printf("-------------------------------------------------\n");
    printf(" Saving to File\n");
    printf("-------------------------------------------------\n");
    printf("=================================================\n");

    // Check if file exists
    if(file_exists("students.txt")) {
        // Delete the file
        if(remove("students.txt") != 0) {
            printf("Error deleting file\n");
            return;
        }
    }

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        printf("-------------------------------------------------\n");
        printf("=================================================\n");
        return;
    }

    for (int i = 0; i < num_students; i++) {
        fprintf(fp, "%s %d %.2f\n", students[i].name, students[i].roll_number, students[i].marks);
    }

    fclose(fp);

    printf("Student records saved to file successfully.\n");
    printf("-------------------------------------------------\n");
    printf("=================================================\n");
}

/**
 * Checks if a file exists.
 *
 * @param {string} filename The name of the file to check.
 *
 * @returns {boolean} True if the file exists, false otherwise.
 *
 * @throws None
*/
int file_exists(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp != NULL) {
        fclose(fp);
        return 1;
    }
    return 0;
}

/**
 * Loads student data from a file named "students.txt" into the given array of student_t structures.
 *
 * @param students pointer to an array of student_t structures
 * @param num_students pointer to the number of students in the array
 *
 * @return void
 *
 * @throws None
 */
void load_from_file(student_t *students, int *num_students) {
    printf("=================================================\n");
    printf("-------------------------------------------------\n");
    printf("               Loading from File\n");
    printf("-------------------------------------------------\n");
    printf("=================================================\n");
    FILE *fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        printf("-------------------------------------------------\n");
        printf("=================================================\n");
        return;
    }

    while (!feof(fp)) {
        student_t student;
        fscanf(fp, "%s %d %f", student.name, &student.roll_number, &student.marks);
        students[*num_students] = student;
        (*num_students)++;
    }

    fclose(fp);

    printf("Student records loaded from file successfully.\n");
    printf("-------------------------------------------------\n");
    printf("=================================================\n");
}