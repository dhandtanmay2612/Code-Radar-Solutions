#include <stdio.h>

int findKthMissingPositive(int arr[], int n, int k) {
    int missingCount = 0; // Counter for missing positive numbers
    int current = 1; // Start checking from the first positive number
    int index = 0; // Index for the input array

    while (missingCount < k) {
        // If current number is in the array, skip it
        if (index < n && arr[index] == current) {
            index++;
        } else {
            // If current number is missing
            missingCount++;
            if (missingCount == k) {
                return current; // Return the Kth missing positive number
            }
        }
        current++; // Check the next positive number
    }

    return -1; // Just in case we did not find the Kth missing number
}

int main() {
    int n, k;

    // Read the size of the array
    scanf("%d", &n);
    int arr[n];

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the integer K
    scanf("%d", &k);

    // Find and print the Kth missing positive integer
    int result = findKthMissingPositive(arr, n, k);
    printf("%d\n", result);

    return 0;
}
