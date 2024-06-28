/**
 * @file student.h
 * @brief Header file for the student module.
 *
 * This file contains the declaration of the `student_t` struct and the function prototypes for the student module.
 */

#ifndef STUDENT_H
#define STUDENT_H

/**
 * @struct student_t
 * @brief Represents a student.
 *
 * This struct holds the information of a student.
 *
 * @var char name[50]
 * The name of the student.
 *
 * @var int roll_number
 * The roll number of the student.
 *
 * @var float marks
 * The marks of the student.
 */
typedef struct {
    char name[50];
    int roll_number;
    float marks;
} student_t;

void greet(char *name);
void remove_student(student_t *students, int *num_students);

#endif