#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int rollNumber;
    char name[50];
    float marks;
} Student;

int compareStudents(const void *a, const void *b) {
    Student *studentA = (Student *)a;
    Student *studentB = (Student *)b;
    if (studentB->marks > studentA->marks) {
        return 1;
    } else if (studentB->marks < studentA->marks) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    Student *students = (Student *)malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    qsort(students, n, sizeof(Student), compareStudents);

    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }

    free(students);
    return 0;
}