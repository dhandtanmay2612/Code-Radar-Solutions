#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Student students[N];
    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
    }

    float totalMarks = 0;
    for (int i = 0; i < N; i++) {
        totalMarks += students[i].marks;
    }
    float averageMarks = totalMarks / N;

    printf("%.2f\n", averageMarks);

    return 0;
}