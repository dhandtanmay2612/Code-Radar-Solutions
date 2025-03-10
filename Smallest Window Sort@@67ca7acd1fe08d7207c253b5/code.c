#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int start = -1, end = -1;

        // Find the start of the unsorted subarray
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                start = i;
                break;
            }
        }

        // If the array is already sorted
        if (start == -1) {
            printf("0\n");
            continue;
        }

        // Find the end of the unsorted subarray
        for (int i = n - 1; i > 0; i--) {
            if (arr[i] < arr[i - 1]) {
                end = i;
                break;
            }
        }

        // Find the minimum and maximum elements in the unsorted subarray
        int minVal = arr[start], maxVal = arr[start];
        for (int i = start + 1; i <= end; i++) {
            if (arr[i] < minVal) {
                minVal = arr[i];
            }
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }

        // Expand the unsorted subarray to include elements that would make the entire array sorted
        while (start > 0 && arr[start - 1] > minVal) {
            start--;
        }
        while (end < n - 1 && arr[end + 1] < maxVal) {
            end++;
        }

        // Calculate and print the length of the unsorted subarray
        printf("%d\n", end - start + 1);
    }

    return 0;
}