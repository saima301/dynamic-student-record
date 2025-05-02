#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int rollNo;
    float gpa;
} Student;

// Function declarations
void addStudents(Student *students, int n);
void displayStudents(Student *students, int n);
void updateGPA(Student *students, int n, int rollNo, float newGPA);
void sortByGPA(Student *students, int n);

int main() {
    int n, rollNo;
    float newGPA;
    Student *students;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Allocate memory for students
    students = (Student *)malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input data
    addStudents(students, n);

    // Display all records
    printf("\nStudent Records:\n");
    displayStudents(students, n);

    // Update GPA
    printf("\nEnter roll number to update GPA: ");
    scanf("%d", &rollNo);
    printf("Enter new GPA: ");
    scanf("%f", &newGPA);
    updateGPA(students, n, rollNo, newGPA);

    // Display updated records
    printf("\nUpdated Records:\n");
    displayStudents(students, n);

    // Bonus: Sort by GPA
    printf("\nSorted by GPA (Descending):\n");
    sortByGPA(students, n);
    displayStudents(students, n);

    // Free memory
    free(students);
    return 0;
}

// Function to input student data
void addStudents(Student *students, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter data for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);  // Read string with spaces
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("GPA: ");
        scanf("%f", &students[i].gpa);
    }
}

// Function to display student records
void displayStudents(Student *students, int n) {
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Roll No: %d, GPA: %.2f\n",
               students[i].name, students[i].rollNo, students[i].gpa);
    }
}

// Function to update GPA by roll number
void updateGPA(Student *students, int n, int rollNo, float newGPA) {
    for (int i = 0; i < n; i++) {
        if (students[i].rollNo == rollNo) {
            students[i].gpa = newGPA;
            return;
        }
    }
    printf("Student with Roll No %d not found.\n", rollNo);
}

// Bonus: Function to sort students by GPA descending
void sortByGPA(Student *students, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].gpa < students[j].gpa) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}
