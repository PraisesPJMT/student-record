#include <stdio.h>
#include <string.h>

/**
 * Modifies an existing student in the array of students.
 *
 * @param students pointer to an array of student_t structures
 * @param num_students number of students in the array
 *
 * @return void
 *
 * @throws None
 */
void modify_student(student_t *students, int num_students) {
    printf("=================================================\n");
    printf("-------------------------------------------------\n");
    printf("               Modifying Existing Student\n");
    printf("-------------------------------------------------\n");
    printf("=================================================\n");

    int roll_number;
    printf("Enter roll number to modify: ");
    scanf("%d", &roll_number);

    for (int i = 0; i < num_students; i++) {
        if (students[i].roll_number == roll_number) {
            int choice;
            do {
                printf("---------------------------\n");
                printf("Choose what to modify:\n");
                printf("---------------------------\n");
                printf("[1] First Name: %s\n", students[i].first_name);
                printf("[2] Last Name: %s\n", students[i].last_name);
                printf("[3] Marks: %.2f\n", students[i].marks);
                printf("[4] Exit Modify\n");
                printf("---------------------------\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        printf("Enter new first name: ");
                        scanf("%s", students[i].first_name);
                        printf("---------------------------\n");
                        printf("%s First Name Modified Successfully\n", students[i].first_name);
                        printf("---------------------------\n");
                        break;
                    case 2:
                        printf("Enter new last name: ");
                        scanf("%s", students[i].last_name);
                        printf("---------------------------\n");
                        printf("%s Last Name Modified Successfully\n", students[i].last_name);
                        printf("---------------------------\n");
                        break;
                    case 3:
                        printf("Enter new marks: ");
                        scanf("%f", &students[i].marks);
                        printf("---------------------------\n");
                        printf("%.2f Marks Modified Successfully\n", students[i].marks);
                        printf("---------------------------\n");
                        break;
                    case 4:
                        printf("Exiting Modify\n");
                        printf("\n '%s' Record Modified Successfully \n", students[i].first_name);
                        printf("-------------------------------------------------\n");
                        printf("=================================================\n");
                        return;
                    default:
                        printf("Invalid choice. Please try again.\n");
                        printf("---------------------------\n");
                        break;
                }
            } while (choice != 4);

            
        }
    }
    printf("Student not found.\n");

    printf("-------------------------------------------------\n");
    printf("=================================================\n");
}
