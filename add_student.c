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
    
    printf("Enter student name: ");
    scanf("%s", students[*num_students].name);
    printf("Enter roll number: ");
    scanf("%d", &students[*num_students].roll_number);
    printf("Enter marks: ");
    scanf("%f", &students[*num_students].marks);
    (*num_students)++;


    printf("\n New Student '%s' Added Successfully \n", students[*num_students - 1].name);
    printf("-------------------------------------------------\n");
    printf("=================================================\n");
}


 