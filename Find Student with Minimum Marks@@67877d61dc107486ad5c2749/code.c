#include <stdio.h>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    double marks;
};

int main() {
    int n;
    cin >> n;

    vector<Student> students(n);
    for (int i = 0; i < n; ++i) {
        cin >> students[i].rollNumber >> students[i].name >> students[i].marks;
    }

    int minIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (students[i].marks < students[minIndex].marks) {
            minIndex = i;
        }
    }

    cout << "Student with Minimum Marks: Roll Number: " << students[minIndex].rollNumber
         << ", Name: " << students[minIndex].name << ", Marks: " << students[minIndex].marks << endl;

    return 0;
}