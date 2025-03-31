#include <stdio.h>
#include <limits.h>

// Function to find the smallest window to sort
void smallestWindowSort(int arr[], int n) {
    int start = -1, end = -1;

    // Find the first element that is out of order
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }

    // If the array is already sorted, return
    if (start == -1) {
        printf("Array is already sorted\n");
        return;
    }

    // Find the last element that is out of order
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }

    // Find the minimum and maximum in the subarray
    int min_val = INT_MAX, max_val = INT_MIN;
    for (int i = start; i <= end; i++) {
        if (arr[i] < min_val) min_val = arr[i];
        if (arr[i] > max_val) max_val = arr[i];
    }

    // Extend the window if necessary
    while (start >= 0 && arr[start] > min_val) {
        start--;
    }
    while (end < n && arr[end] < max_val) {
        end++;
    }

    // Output the result
    printf("Smallest window to sort: [%d, %d]\n", start + 1, end - 1);
}

int main() {
    int arr[] = {1, 3, 5, 2, 6, 4, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    smallestWindowSort(arr, n);
    return 0;
}
