#include <stdio.h>

int findKthMissingPositive(int arr[], int n, int k) {
    int missingCount = 0;
    int current = 1;
    int index = 0;

    while (missingCount < k) {
        if (index < n && arr[index] == current) {
            index++;
        } else {
            missingCount++;
            if (missingCount == k) {
                return current;
            }
        }
        current++;
    }

    return -1;
}
