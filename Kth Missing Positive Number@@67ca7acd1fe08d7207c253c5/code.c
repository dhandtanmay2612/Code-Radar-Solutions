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