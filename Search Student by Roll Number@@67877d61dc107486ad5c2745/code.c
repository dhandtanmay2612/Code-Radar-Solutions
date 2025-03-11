#include <stdio.h>

struct student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    struct student students[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    int a;
    scanf("%d", &a);

    int found = 0; 
    for (int i = 0; i < n; i++) {
        if (students[i].rollNumber == a) {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Student not found\n");
    }

    return 0;
}