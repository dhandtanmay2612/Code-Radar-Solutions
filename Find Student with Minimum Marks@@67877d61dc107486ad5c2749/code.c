#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[100];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    int minIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (students[i].marks < students[minIndex].marks) {
            minIndex = i;
        }
    }

    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n",
           students[minIndex].rollNumber, students[minIndex].name, students[minIndex].marks);

    return 0;
}