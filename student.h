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


void add_student(student_t *students, int *num_students);

void modify_student(student_t *students, int num_students);

void remove_student(student_t *students, int *num_students);

void search_student(student_t *students, int num_students);

void sort_students(student_t *students, int num_students);

int file_exists(const char *filename);

void save_to_file(student_t *students, int num_students);

void load_from_file(student_t *students, int *num_students);

void calculate_average(student_t *students, int num_students);


#endif