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

int main() {
    int n, k;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    int result = findKthMissingPositive(arr, n, k);
    printf("%d\n", result);

    return 0;
}