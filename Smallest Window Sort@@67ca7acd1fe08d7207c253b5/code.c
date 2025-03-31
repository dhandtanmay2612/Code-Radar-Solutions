#include <stdio.h>
#include <limits.h>

void smallestWindowSort(int arr[], int n, int *m, int *n) {
    int left = 0, right = n - 1;

    // Find the left boundary
    while (left < n - 1 && arr[left] <= arr[left + 1]) {
        left++;
    }

    // Find the right boundary
    while (right > 0 && arr[right] >= arr[right - 1]) {
        right--;
    }

    // If the array is already sorted
    if (left == n - 1) {
        *m = -1;
        *n = -1;
        return;
    }

    // Find the minimum and maximum within the unsorted range
    int minVal = INT_MAX, maxVal = INT_MIN;
    for (int i = left; i <= right; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    // Extend the left boundary
    while (left > 0 && arr[left - 1] > minVal) {
        left--;
    }

    // Extend the right boundary
    while (right < n - 1 && arr[right + 1] < maxVal) {
        right++;
    }

    *m = left;
    *n = right;
}

int main() {
    int arr[] = {1, 2, 5, 3, 7, 10, 9, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m, n_val;

    smallestWindowSort(arr, n, &m, &n_val);

    if (m == -1 && n_val == -1) {
        printf("Array is already sorted.\n");
    } else {
        printf("Smallest window to sort: [%d, %d]\n", m, n_val);
    }

    return 0;
}