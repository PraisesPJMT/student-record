#include <stdio.h>
#include <string.h>
#include "student.h"
#include "greetings.c"
#include "modify_student.c"
#include "display_student.c"
#include "remove_student.c"
#include "add_student.c"
#include "search_student.c"
#include "sort_student.c"
#include "file_operations.c"
#include "calculate_average_student.c"


#define MAX_STUDENTS 100

// Main function that serves as the entry point for the Student Record System.
// Initializes student records, greets the user, and displays a menu for various operations.
// Handles user input for different menu options like adding, modifying, removing, displaying, searching students, calculating average marks, sorting students, saving to file, loading from file, and exiting the program.
// Returns 0 upon successful completion.
int main() {
    student_t students[MAX_STUDENTS];
    int num_students = 0;

    // Initial Setup
    char user_name[50];
    printf("=================================================\n");
    printf("=================================================\n");
    printf("Welcome to the Student Record System! \n");
    printf("=================================================\n");
    printf("=================================================\n");
    printf("Please enter your name: ");
    scanf("%s", user_name);
    greet(user_name);

    while (1) {
        // Display Menu
        printf("\n=================================================\n");
        printf("========= STUDENT RECORD PROGRAM MENU ===========\n");
        printf("=================================================\n");
        printf("[1]  Add Student\n");
        printf("[2]  Modify Student\n");
        printf("[3]  Remove Student\n");
        printf("[4]  Display Students\n");
        printf("[5]  Search Student\n");
        printf("[6]  Calculate Average Marks\n");
        printf("[7]  Sort Students by Marks\n");
        printf("[8]  Save to File\n");
        printf("[9]  Load from File\n");
        printf("[10] Exit\n");
        printf("-------------------------------------------------\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("-------------------------------------------------\n\n");

        switch (choice) {
            case 1:
                // Add Student
                if (num_students >= MAX_STUDENTS) {
                    printf("Maximum number of students reached. Cannot add more.\n");
                    printf("-------------------------------------------------\n");
                    printf("=================================================\n");
                    break;
                }
                add_student(students, &num_students);
                break;
            case 2:
                // Modify Student
                if (num_students == 0) {
                    printf("No students found. Cannot modify.\n");
                    printf("-------------------------------------------------\n");
                    printf("=================================================\n");
                    break;
                }
                modify_student(students, num_students);
                break;
            case 3:
                // Remove Student
                  if (num_students == 0) {
                    printf("No students found. Cannot remove.\n");
                    printf("-------------------------------------------------\n");
                    printf("=================================================\n");
                    break;
                }
                remove_student(students, &num_students);
                break;
            case 4:
                // Display Students
                if (num_students == 0) {
                    printf("No students found. Cannot display.\n");
                    printf("-------------------------------------------------\n");
                    printf("=================================================\n");
                    break;
                }
                display_students(students, num_students);
                break;
            case 5:
                // Search Student
                 if (num_students == 0) {
                    printf("No students found. Cannot search.\n");
                    printf("-------------------------------------------------\n");
                    printf("=================================================\n");
                    break;
                }
                search_student(students, num_students);
                break;
            case 6:
                // Calculate average
                if (num_students == 0) {
                    printf("No students found. Cannot calculate average.\n");
                    printf("-------------------------------------------------\n");
                    printf("=================================================\n");
                    break;
                }
                calculate_average(students, num_students);
                break;
            case 7:
                // Sort students
                if (num_students == 0) {
                    printf("No students found. Cannot sort.\n");
                    printf("-------------------------------------------------\n");
                    printf("=================================================\n");
                    break;
                }
                sort_students(students, num_students);
                break;
            case 8:
                // Save to file
                if (num_students == 0) {
                    printf("No students found. Cannot save.\n");
                    printf("-------------------------------------------------\n");
                    printf("=================================================\n");
                    break;
                }
                save_to_file(students, num_students);
                break;
            case 9:
                // Load from file
                load_from_file(students, &num_students);
                break;
            case 10:
                // Exit the program
                printf("=================================================\n");
                printf("=================================================\n");
                printf("         Goodbye %s!\n", user_name);
                printf("=================================================\n");
                printf("=================================================\n");
                return 0;
            default:
                // Invalid choice
                printf("Invalid choice. Please try again.\n");
                printf("-------------------------------------------------\n");
                printf("=================================================\n");
                break;
        }
    }

    return 0;
}
