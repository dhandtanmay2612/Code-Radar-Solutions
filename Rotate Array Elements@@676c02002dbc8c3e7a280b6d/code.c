#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;

    // Read array size
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read rotation amount
    scanf("%d", &k);

    // Handle cases where k is greater than n or k is negative
    k = k % n;
    if (k < 0) {
        k = k + n; // Make k positive
    }

    // Reverse the entire array
    reverse(arr, 0, n - 1);

    // Reverse the first k elements
    reverse(arr, 0, k - 1);

    // Reverse the remaining n-k elements
    reverse(arr, k, n - 1);

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}